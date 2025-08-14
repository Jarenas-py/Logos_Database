# .MODEL SMALL
.STACK 100h
.DATA
    prompt_msg      DB 'Enter a decimal number: $'
    empty_msg       DB 'Error: Empty input!$'
    invalid_msg     DB 'Error: Invalid input!$'
    newline         DB 13, 10, '$'
    
    buffer          DB 7
                    DB ?
    input_str       DB 7 DUP(?)
    
    number          DW ?
    max_value       DW 65535

- **.model small and stack 100h** states that the model of the .exe emu8086 tasm assembly program would be in the small format meaning that each code segment will have a corresponding data segment which is only 1 in nature in the context of this model (one code segment = one data segment). .stack 100h reserves 256 bytes for the parameters and function calls in this program.

- .**data** is the data segment of this program where in all variables are stored to be utilized later by the program.

- **prompt_msg, empty_msg, invalid_msg and newline** are define byte variables (DB meaning that each character is a byte long)  where in they store various string messages for the program. newline is just a carriage return new line variable to be called for new lines.

- **buffer** ung tutmutulong mag store ng values when mov ah, 0ah is executed. Meron siyang dalawa DB. 
	![[Pasted image 20250515182209.png]]
- Ung **buffer** ay ganto ung pagkakasetup niya and it will act as an index to track the number of characters sa decimal input ng user (kasi character palang talaga yan initially kapag nag enter si user ng number), then ung index ng bawat character na un sa loob ng variable "buffer".
- Si **buffer DB 7**, ung saklaw niya sa table shown above is ung buffer and ung buffer+2-8. Ung current value ni buffer ay 7 which means na ililimit lang ni program sa 7 character inputs ung user. And un ung silbi ni buffer, nireremember niya ung max  number of characters na sinet natin which is 7.
- As for **buffer +2 hanggang +8,** yan ung mga indexes and dyan naka store ung individual characters ng input string ng user. 2 hanggang 8 siya kasi thats 7 in total and 7 ung sinet nating number of characters permitted for the user input. So if si user naginput ng string na '345' si 3 ay mapupunta sa buffer , si 4 sa buffer 3 then si 5 sa buffer +4.
- Si **buffer+1** naman siya ung nagsstore kung ilang characters ung ininput ni user. So balik tayo sa '345' string ni input user. Ang buffer+1 would equal 3 kasi 345 has 3 characters.

- **input_str**

- **number**

- **max_value** ay nag seset ng maximum decimal value na pwedeng ilagay ni user which is 65535 which is the maximum 16-bit decimal number. Naka DW siya because a define word is 2 bytes or 16 bits and 65535 is a 16 bit decimal value.

# .code
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    MOV AH, 9
    LEA DX, prompt_msg
    INT 21h
    
    MOV AH, 0Ah
    LEA DX, buffer
    INT 21h

    MOV AH, 9
    LEA DX, newline
    INT 21h
    
    MOV BL, buffer[1]
    CMP BL, 0
    JE empty_input
    
    CALL str_to_num
    JC invalid_input

- **.code and main proc** is the code segment and the start of the procedure respectively to start that part of the program.

- **MOV AX, @DATA**
    **MOV DS, AX** moves the data segment to ax then to ds.

- **MOV AH, 9**
    **LEA DX, prompt_msg**
    **INT 21h** prints the string in prompt_msg that tells the user to enter the input.

- **MOV AH, 0Ah**
    **LEA DX, buffer**
    **INT 21h** does the actual input handling and calls upon buffer to store the characters, number of characters in side buffer as explained in the expanation of what buffer does earlier in the data segment part of this notes.

- **MOV AH, 9**
    **LEA DX, newline**
    **INT 21h** simply prints a new line through carriage return and line feed (13 and 10 respectively). 

- **MOV BL, buffer[1]**
    **CMP BL, 0**
    **JE empty_input** checks buffer +1 after input and stores it in BL. If ung laman ni buffer +1 ay 0, that means wala siyang input. If that is equal to zero daw, it will go to the label empty_input which will be explained later kung ano ginagawa.

-  **CALL str_to_num**
    **JC invalid_input** calls the procedure str_to_num which is a procedure that does that actual conversion of string characters to numbers, checking of stuff, calculation and all. These will be explained later. If may problema sa flag register whcih means may nangyaring mali sa solving, it will go to invalid_input label which will be explained later as to what it does.

# print_loop
mov cx, 1
-     CMP CX, number
    JA end_program
    
    MOV AX, CX
    CALL print_num
    
    MOV AH, 2
    MOV DL, ' '
    INT 21h
    
    ADD CX, 2
    JMP print_loop

- **mov cx,1** 
  **CMP CX, number**
    **JA end_program** apparantely number is ung converted string to interger input ng user.  Cx is initialized as 1 since all odd numbers start from 1 then icocompare natin si cx sa number. If cx is above the number input ng user, go to label end_program which ultimately ends the program. This makes sense kasi bakit ka magpapatuloy na mag print ng odd numbers if ung counter odd number mo has exceeded the number the user has inputted. moving on, si cx nilagay natin sa ax and the print_num procedure is called which will be explained later.

- **MOV AH, 2**
    **MOV DL, ' '**
    **INT 21h** spaces is print after printing the odd interger.

- **ADD CX, 2**
    **JMP print_loop** cx is added by two kasi ganun ung increment ng mga odd numbers then it loops back to the start of print_loop hanggang sa mag greater than si cx kesa kay number variable.

# Error Handling
- empty_input:
    MOV AH, 9
    LEA DX, empty_msg
    INT 21h
    JMP end_program
    
invalid_input:
    MOV AH, 9
    LEA DX, invalid_msg
    INT 21h
    JMP end_program
    
end_program:
    MOV AX, 4C00h
    INT 21h
MAIN ENDP

- **empty_input:**
    **MOV AH, 9**
    **LEA DX, empty_msg**
    **INT 21h**
    **JMP end_program** prints that there is an empty input then goes to end_program.

- **invalid_input:**
    **MOV AH, 9**
    **LEA DX, invalid_msg**
    **INT 21h**
    **JMP end_program** activates when there is an invalid input such as character input or decimal input that has exceeded 16 bits. 

**end_program:**
    **MOV AX, 4C00h**
    **INT 21h**
**MAIN ENDP** ends the procedure and the program itself and returns the control back to the OS.

# str_to_num
str_to_num PROC
    PUSH AX
    PUSH BX
    PUSH CX
    PUSH DX
    PUSH SI
    
    LEA SI, buffer + 2
    
    XOR AX, AX
    MOV BL, buffer[1]
    XOR BH, BH
    
    CMP BL, 0
    JE conversion_error
    
    MOV CL, BL
    XOR CH, CH

- **str_to_num PROC**
    **PUSH AX**
    **PUSH BX**
    **PUSH CX**
    **PUSH DX**
    **PUSH SI** initializes the str_to_num procedure. Afterwards it pushes the current values ng AX, BX, CX, DX and SI sa stack. This is done mainly because if there are values sa general registers natin and we want to utilizes those registers with values into another procedure, the procedure does that job. Nag cacarry over siya kumbaga.

- **LEA SI, buffer + 2** si buffer[2] which contains the first character sa string number input ng user will be stored sa SI.

- **XOR AX, AX**
    **MOV BL, buffer[1]**
    **XOR BH, BH**
    
    **CMP BL, 0**
    **JE conversion_error**  xor ax, ax initializes the ax to be zero. Parehas lang siya sa mov ax, 0. Mas maangas lang siya gamitin. (Remember na sa xor, kapag parehas, 0, kapag magkaiba ng logic, 1. So in this case, value ng register sa sarili niyang value= 0). si mov bl, buffer [1] which containes the user input character string count is moved to bl. Si bh naman ay ininitialize as 0 through xor bh, bh. Remember na a general register contains high and low (in thise case bh and bl) and there are certain functions in assembly na general register ang kailangan gamitin to function. By setting bh to zero and bl sa buffer [1], magagamit natin ung bx that contains the value of buffer 1 to our liking. Anw , cmp bl, 0 states na if ung bl natin is zero or no input (empty) mag aactivate ung label conversion_error.

- **MOV CL, BL**
    **XOR CH, CH** bl goes to cl then initialize ch to 0 para magamit ung CX ng maayos which contains the value of buffer [1].

# process_char
- process_char:
    MOV BL, [SI]
    
    CMP BL, '0'
    JB conversion_error
    CMP BL, '9'
    JA conversion_error
    
    SUB BL, '0'
    XOR BH, BH
    
    CMP AX, 6554
    JAE conversion_error
    
    CMP AX, 6553
    JNE no_special_check
    
    CMP BL, 5
    JA conversion_error
    
- **process_char:**
    **MOV BL, [SI]**
    
    **CMP BL, '0'**
    **JB conversion_error**
    **CMP BL, '9'**
    **JA conversion_error** ung SI natin which contains buffer [2] or the first string character number ni user ay ilalagay natin sa BL. if ung bl natin ay below string 0 or above string 9, aactivate ung conversion_error label. If that is not the case naman and whithin number range. Subtract bl to '0' or 48 in decimal or 30h sa hexadecimal para maging actual decimal number si buffer [2].  Then para maayos and maliis si bx, linisin natin siya through xor bh bh since bl now contains the actual decimal number in buffer [2]. if ax is above or equal 6554, go to conversion_error. 6554 kasi it is to prevent overflow. Kapag 6554 and above is multiplied by 10, it exceeds 65535 which is more than 16 bits, more than the ax register can handle. Ganun din ung case sa cmp ax, 6553 pero it would go to no_special_check if ax not equal to 6553. pero kapag equal ax sa 6553 which would be a special case, it would check if bl is greater than 5 and if that is the case, mag cacause sya ng overflow where in gagamitan natin ng conversion error. 

# no_special_check
- PUSH BX
    MOV BX, 10
    MUL BX
    POP BX
    
    ADD AX, BX
    JC conversion_error
    
    INC SI
    LOOP process_char
    
    MOV number, AX
    CLC
    JMP end_conversion

- 