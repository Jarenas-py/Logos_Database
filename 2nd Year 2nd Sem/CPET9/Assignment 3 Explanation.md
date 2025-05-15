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
- 