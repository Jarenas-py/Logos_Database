CPET9-L Hands On Activity 3 Answers:

1. The following source code presented on Procedure number 1 prints the word "HELLO".
2. The following source code presented on Procedure number 8 prints the sentence string "WELCOMETO THE WORLD OF ASSEMBLE LANGUAGE." (Period not included). Due to the fact that MSG1 does not have a space in between WELCOME and the "$" symbol, when the program executes, there is not space in between the words "WELCOME" and "TO."

Problem 1: The function 02h and 02 are the same function and is interpreted as such by TASM and MASM when executed. This is due to the fact that even though 02 is a decimal, when converted to hexadecimal, it is still of same value when converted.

Problem 2: Considering procedure number 1, the output is still the same. The function "06H" is a function that when paired with a string or ASCII output and "INT 21H," waits for an input. If there is not input, it prints the string or ASCII symbol applied by the programmer. This is done incrementally when there are no inputs. In the case of procedure number 1, there are no inputs so that program iterates each ASCII equivalent therefore printing hello.

Problem 3: "INT 21H" is an interrupt command in assembly that executes whatever command is stored in a register.

Problem 4: The function of "09H" is to simply print a string stored in the .DATA segment of a program.

Problem 5: The purpose of MOV DS, AX is to move the contents of information stored in the .DATA section of the program into the the data segment register of the memory. Following the source code in procedure number 8, the data section of the code is stored in ax, afterwards, ax (which contains the data section of the program) is sent to the data segment register for the system unit to read the data section of the program when executed.

Problem 6: The use of MOV AH, 4CH stores the value 4ch on the Accumulator high register. This command essentially terminates the program. When executed without, the program results to an error.

Problem 7: 
DOSSEG
.MODEL SMALL
.STACK 200H

.DATA
ADDRESS DB "             San Marcelino St, Ayala Blvd, Ermita, Manila, 1000               $"
COURSE DB "                                  BET-CPET 2A                                 $"
TUPSPACE DB "                                     $"
NAMESPACE DB "                                 $"
TUPSPACE2 DB "                                      $"
NAMESPACE2 DB "                                $"

.CODE
START:
    MOV AX, @DATA
    MOV DS, AX

    MOV AH, 0EH
    MOV AL, 201
    INT 10H

MOV CX, 78
LOOP_UPPERHORIZONTAL:
    MOV AL, 205
    MOV AH, 0EH
    INT 10H
    LOOP LOOP_UPPERHORIZONTAL

UPPER_LEFT:
    MOV AH, 0EH
    MOV AL, 187
    INT 10H

    JMP PRINT_TIME

PRINT_TIME:
    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV AH, 09H
    LEA DX, TUPSPACE
    INT 21H

    MOV AH, 02H
    MOV DL, 'T'
    INT 21H

    MOV DL, 'U'
    INT 21H

    MOV DL, 'P'
    INT 21H

    MOV AH, 09H
    LEA DX, TUPSPACE2
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV DL, 0DH
    INT 21H

    MOV DL, 0AH
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV AH, 09H
    LEA DX, ADDRESS
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV AH, 09H
    LEA DX, NAMESPACE
    INT 21H

    MOV AH, 06H
    MOV DL, 4AH
    INT 21H

    MOV DL, 6FH
    INT 21H

    MOV DL, 73H
    INT 21H

    MOV DL, 65H
    INT 21H

    MOV DL, 70H
    INT 21H

    MOV DL, 68H
    INT 21H

    MOV DL, ' '
    INT 21H

    MOV DL, 41H
    INT 21H

    MOV DL, 72H
    INT 21H

    MOV DL, 65H
    INT 21H

    MOV DL, 6EH
    INT 21H

    MOV DL, 61H
    INT 21H

    MOV DL, 73H
    INT 21H

    MOV AH, 09H
    LEA DX, NAMESPACE2
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV DL, 0DH
    INT 21H

    MOV DL, 0AH
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

    MOV AH, 09H
    LEA DX, COURSE
    INT 21H

    MOV AH, 0EH
    MOV AL, 186
    INT 10H

LOWER_LEFT:
    MOV AH, 0EH
    MOV AL, 200
    INT 10H

MOV CX, 78
LOOP_LOWERHORIZONTAL:
    MOV AL, 205
    MOV AH, 0EH
    INT 10H
    LOOP LOOP_LOWERHORIZONTAL

LOWER_RIGHT:
    MOV AH, 0EH
    MOV AL, 188
    INT 10H

    MOV AH, 4CH
    INT 21H

END START