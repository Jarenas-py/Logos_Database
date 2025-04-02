CPET9-L Activity 2 Answers:

Data and Results:
1. For the program:

MAIN SEGMENT
ASSUME CS:MAIN,DS:MAIN,ES:MAIN,SS:MAIN
ORG 100h
START:
	MOV DL,41h
	MOV DH,41h
	CMP DH,DL
	JE TheyAreEqual
	JMP TheyAreNotEqual
TheyAreNotEqual:
	MOV AH,02h
	MOV DL,4Eh
	INT 21h
	INT 20h
TheyAreEqual:
	MOV AH,02h
	MOV DL,59h
	INT 21h
	INT 20h
MAIN ENDS
END START

The following result is:

YC:\>	
	
Where in Y is the output of the program since DL and DH are equal to each other hence the JE function is executed which contains commands in the TheyAreEqual Label. Because there is no new line function commands in the TheyAreEqual function, the output "Y" is near the current file directory of the programmer's DOSBOX. Furthermore, the C equivalent code also yields the expected result of "Y." 

2. The following Assembly Program:

MAIN SEGMENT
ASSUME CS:MAIN,DS:MAIN,ES:MAIN,SS:MAIN
ORG 100h

START:
    MOV CX, 5
LOOP_LABEL:
    MOV AH,02h
    MOV DL,2Ah
    INT 21h
    LOOP LOOP_LABEL
    INT 20h

MAIN ENDS
END START

and C Program:

#include <stdio.h>
#include <conio.h>
int main(){
    int cx;
    for (cx=0;cx<5;cx++)
    printf("*");
    getch();

    return 0;
}

Loops the printed character "*****" when executed. Due to the fact that the assembly code provided did not have any functions for adding a newline, the output of the .com program was printed beside the current file directory of the DOSBOX Assembler. The output results as follows: *****C:\>

3. The following Assembly Code:

MAIN SEGMENT
ASSUME CS:MAIN,DS:MAIN,ES:MAIN,SS:MAIN
ORG 100h

START:
    MOV CX, 5

LOOP_LABEL:
    MOV AH,02h
    MOV DL,2Ah
    INT 21h
    DEC CX
    CMP CX, 0
    JNZ loop_label;
    INT 20h

MAIN ENDS
END START

and C program:

#include <stdio.h>
#include <conio.h>
int main(){
    void print();
    print();
    getch();
    return 0;
}

void print(){
    int cx=1;
    while (cx<=5){
        printf("*");
        cx++;
    }
}

Both print "*****". Due to the fact that the assembly code does not include functions for new line after printing the output, the result presents the following. *****C:\>

4. The Assembly Code:

MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    message DB "Hello World!$"
    MOV AH,09h
    MOV DX,OFFSET message
    INT 21h
    INT 20h
MAIN ENDS 
END START

and the C Program:

#include <stdio.h>
#include <conio.h>
int main(){
    char message[]= "Hello World!";
    printf("%s", message);
    getch();
    return 0;
}

Both print the string Hello World!. Due to the provided assembly program not having a new line function added, the follow shows the output when ran in DOSBOX: Hello World!C:\>

5. The following Assembly Program:

MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
CALL MeBaby
CALL MeBaby
CALL MeBaby
CALL MeBaby
CALL MeBaby
CALL MeBaby
CALL MeBaby
INT 20h

MeBaby PROC
    MOV AH,09
    LEA DX, MSG
    INT 21h
    RET
    MeBaby ENDP
    MSG DB 'Assembly Programming is EASY!$'
MAIN ENDS
END START

Prints the string, "Assembly Programming is EASY!" 7 times without spaces from each other. To achieve that output in C, the code would be as follows:

#include <stdio.h>
int main(){
    int i=0;
    for (i=0;i<=6;i++){
        printf("Assembly Programming is EASY!");
    }
    return 0;
}

6. MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    MOV AX, 2
    MOV BX, 3
    CMP AX, BX
    JBE LessorEqual

LessorEqual:
    MOV AX, 5
    MOV BX, 6

    MOV AH, 09h
    LEA DX, MESSAGE
    INT 21H

    INT 20H

MESSAGE DB "EAX= 5, EBX=6", 0DH, 0AH, "$"

MAIN ENDS
END START


7. MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    MOV DH, VAR1
    MOV DL, VAR2
    CMP DH, DL
    JBE LessorEqual
    JMP Greater 

LessorEqual:
    MOV DL, VAR3

    MOV AH, 09H
    LEA DX, MESSAGE
    INT 21H

    INT 20H
Greater:
    MOV BYTE PTR VAR3, 10
    MOV DL, VAR4

    MOV AH, 09H
    LEA DX, MESSAGE2
    INT 21H

    INT 20H

VAR1 DB 2
VAR2 DB 3
VAR3 DB 15
VAR4 DB 20

MESSAGE DB "VAR3= 15", 0DH, 0AH, "$"
MESSAGE2 DB "VAR3= 10, VAR4= 20", 0DH, 0AH, "$"

MAIN ENDS
END START

8. MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    MOV AL, 5
    MOV BL, 4
    CMP AL, BL
    JBE Error

    MOV CL, 4
    CMP BL, CL
    JNE Error 

    JMP Success

Success:
    MOV DL, x
    MOV AH, 09H
    LEA DX, SUCCESSMESSAGE
    INT 21H

    INT 20H

Error:
    MOV AH, 09H
    LEA DX, FAILMESSAGE
    INT 21H

    INT 20H

SUCCESSMESSAGE DB "x= 1", 0DH, 0AH, "$"
FAILMESSAGE DB "ERROR: A CONDITION IS NOT MET!", 0DH, 0AH, "$"
x DB 1

MAIN ENDS
END START
    
;c.	if ( al>bl) && (bl=cl) x=1;

9. MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    MOV AL, 5
    MOV BL, 4
    CMP AL, BL
    JG SUCCESS
    JBE FAIL

    MOV CL, 3
    CMP BL, CL
    JG SUCCESS
    JBE FAIL

SUCCESS:
    MOV DL, x
    MOV AH, 09H
    LEA DX, SUCCESSMESSAGE
    INT 21H

    INT 20H

FAIL:
    MOV AH, 09H
    LEA DX, FAILMESSAGE
    INT 21H

    INT 20H

SUCCESSMESSAGE DB "x= 1", 0DH, 0AH, "$"
FAILMESSAGE DB "Condition is not met", 0DH, 0AH, "$"
x DB 1

MAIN ENDS
END START

;d.	if (al > bl) || (bl > cl) x=1;

10.  MAIN SEGMENT
ASSUME CS:MAIN, DS:MAIN, ES:MAIN, SS:MAIN
ORG 100h

START:
    MOV AX, 0          ; AX = 0
    MOV BX, 9         ; BX = 10

WHILE_LOOP:
    CMP AX, BX
    JGE END_WHILE      ; while (AX < BX)

    ; Convert AX to ASCII (single-digit only) and print it
    MOV DL, AL         ; Take low byte (AX will be 0-9)
    ADD DL, '0'        ; Convert to ASCII digit
    MOV AH, 02h        ; DOS print character function
    INT 21h             ; Print character in DL

    ; Print newline after each number
    MOV DL, 0Dh        ; Carriage return
    INT 21h
    MOV DL, 0Ah        ; Line feed
    INT 21h

    INC AX              ; AX = AX + 1
    JMP WHILE_LOOP      ; Loop back

END_WHILE:
    MOV AH, 09h
    LEA DX, FINAL_MESSAGE
    INT 21h

    ; Exit program
    MOV AH, 4Ch
    INT 21h

FINAL_MESSAGE DB "Loop ended at 9", 0Dh, 0Ah, "$"

MAIN ENDS
END START

---------------------------------------------------------------------------------------

IN HIGH LEVEL NAMAN. PRACTICE NG LAHAT NG MGA LOW LEVEL ASSEMBLY HEHE:

Procedure 5 Conversion to high level assembly:

DOSSEG
.MODEL SMALL
.STACK 200H

.DATA
    EQUAL_MESSAGE DB "The characters are both 'A'!", 0DH, 0AH, "$"
    NOT_EQUAL_MESSAGE DB "The characters are different from each other!", 0DH, 0AH, "$"
.CODE 
START:
    MOV AX, @DATA
    MOV DS, AX
    
    MOV DL, 41h
    MOV DH, 41h
    CMP DL, DH
    JE EQUAL
    JMP NOT_EQUAL

EQUAL:
    MOV AH, 09H
    LEA DX, EQUAL_MESSAGE
    INT 21H

    INT 20H

NOT_EQUAL:
    MOV AH, 09H
    LEA DX, NOT_EQUAL_MESSAGE
    INT 21H

    INT 20H
END START
---------------------------------------------------------------------------------------

First assembly-c pair converted into high level assembly:

DOSSEG
.MODEL SMALL
.STACK 200H

.DATA

.CODE
START:
    MOV AX, @DATA
    MOV DS, AX

    MOV CX, 5

LOOP_LABEL:
    MOV AH, 02H
    MOV DL, 2AH
    INT 21H
    
    LOOP LOOP_LABEL
    INT 20H

END START
--------------------------------------------------------------------------------------
C TO ASSEMBLY CODE CONVERSIONS

1. DOSSEG
.MODEL SMALL
.STACK 200H

.DATA
LESS_MESSAGE DB "eax= 5, edx= 6", 0DH, 0AH, "$"
MORE_MESSAGE DB "The condition is not met!", 0DH, 0AH, "$"  

.CODE
START:
    MOV AX, @DATA
    MOV DS, AX

    MOV BX, 4
    MOV CX, 5
    CMP BX, CX
    JBE LESS
    JG MORE

LESS:
    MOV AX, 5
    MOV DX, 6

    MOV AH, 09H
    LEA DX, LESS_MESSAGE
    INT 21H

    INT 20H

MORE:
    MOV AH, 09H 
    LEA DX, MORE_MESSAGE
    INT 21H
    
    INT 20H

END START





2. DOSSEG 
.MODEL SMALL
.STACK 200H

.DATA
LESS_MESSAGE DB "var3= 15", 0DH, 0AH, "$"
ELSE_MESSAGE DB "var3= 10, var4= 20", 0DH, 0AH, "$"

var1 DB 5
var2 DB 3
var3 DB 15
var4 DB 20

.CODE
START:
    MOV AX, @DATA
    MOV DS, AX

    MOV DH, var1
    MOV DL, var2
    CMP DH, DL
    JBE LESS
    JG ELSE_CONDITION

LESS:
    MOV DL, var3
    MOV AH, 02H
    LEA DX, LESS_MESSAGE
    INT 21H

    INT 20H

ELSE_CONDITION:
    MOV BYTE PTR var3, 10
    MOV DH, var3
    MOV DL, var4
    MOV AH, 09H
    LEA DX, ELSE_MESSAGE
    INT 21H

    INT 20H

END START

3. 




