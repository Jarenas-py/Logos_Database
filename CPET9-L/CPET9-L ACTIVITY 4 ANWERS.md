CPET9-L ACTIVITY 4

1. DOSSEG
.MODEL SMALL
.STACK 64H

.DATA
MSG DB 'Hi! How do you do?$'

.CODE
START:
    MOV AX, @DATA
    MOV DS, AX

    MOV AH, 02H
    MOV DH, 12
    MOV DL, 18
    INT 10H

    MOV AH, 09H
    MOV BX, 97H
    MOV CX, 10H
    INT 10H

    MOV AH, 09H
    LEA DX, MSG
    INT 21H

    MOV AH, 4CH
    INT 21H
    END START

2. dosseg 
.model small 
.stack 
.data 
    msg1 db 13,10,"Enter a character:$" 
    msg2 db 13,10,"The character you entered is:$" 

.code 
 main proc 
    mov ax,@data 
    mov ds,ax 

    lea dx,msg1 
    mov ah,09h 
    int 21h 

    mov ah,01h 
    int 21h 

    mov bl,al 
    lea dx,msg2 
    mov ah,09h 
    int 21h 

    mov dl,bl 
    mov ah,02h 
    int 21h 
    mov ax,4c00h 
    int 21h 
main endp 
end 

3. dosseg 
.model small 
.stack 

.data 
msg1 db 13,10,"Enter a string with dollar symbol as a break:$" 
msg2 db 13,10,"Reverse of the string is:$" 
strg db 20 DUP(0)                               
restr db 20 DUP(0) 

.code 
 main proc 
      mov ax,@data 
      mov ds,ax

      mov es,ax 
      mov di,00 
      lea dx,msg1 
      mov ah,09h 
      int 21h 

 read:
    mov ah,01h 
    int 21h 

    cmp al,24h 
    je next 
    inc di 
    mov strg[di],al 
    jmp read 

next: 
    mov si,00 

start:

    cmp di,0 
    je dmsg2 
    mov al,strg[di] 
    mov restr[si],al 
    inc si 
    dec di 
    jmp start 

dmsg2:
    lea dx,msg2 
    mov ah,09h 
    int 21h 

dis:
    mov al,restr[di] 
    cmp al,0 
    je ou 
    mov dl,al 
    mov ah,02h 
    int 21h

    inc di 
    jmp dis 

 ou: 
    mov ax,4c00h 
      int 21h 
 main endp 
 end