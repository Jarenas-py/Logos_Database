CPET9-L Hands On 5
1. dosseg
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

 read:mov ah,01h
      int 21h
      cmp al,24h
      je next
      inc di
      mov strg[di],al
      jmp read

next: mov si,00

start:cmp di,0
      je dmsg2
      mov al,strg[di]
      mov restr[si],al
      inc si
      dec di
      jmp start

dmsg2:lea dx,msg2
      mov ah,09h
      int 21h

  dis:mov al,restr[di]
      cmp al,0
      je ou
      mov dl,al
      mov ah,02h
      int 21h
      inc di
      jmp dis
      
  ou: mov ax,4c00h
      int 21h

 main endp
      end

2. dosseg
      .model small
      .stack
      .data
           msg1 db 13,10,"Enter first number:$"
           msg2 db 13,10,"Enter second number:$"
           msg3 db 13,10,"Sum in decimal number:$"
           num1 db ?
           sum db ?
           res db 20 DUP('$')
      .code
 main  proc
       mov ax,@data
       mov ds,ax

       lea dx,msg1
       mov ah,09h
       int 21h
       mov ah,01h
       int 21h
       sub al,'0'
       mov num1,al

       lea dx,msg2
       mov ah,09h
       int 21h
       mov ah,01h
       int 21h
       sub al,'0'
       add al,num1
       mov sum,al

       lea dx,msg3
       mov ah,09h
       int 21h

       mov si,offset res
       mov ax,00
       mov al,sum
       call hex2asc

       lea dx,res
       mov ah,09h
       int 21h

       mov ax,4c00h
       int 21h

 main  endp
 hex2asc proc near
         push ax
         push bx
         push cx
         push dx
         push si
         mov cx,00h
         mov bx,0Ah

   rpt1: mov dx,00
         div bx

         add dl,'0'
         push dx

         inc cx
         cmp ax,0Ah
         jge rpt1

         add al,'0'
         mov [si],al
   rpt2: pop ax
         inc si
         mov [si],al
         loop rpt2

         inc si
         mov al,'$'
         mov [si],al
         pop si
         pop dx
         pop cx
         pop bx
         pop ax
         ret
 hex2asc endp
       end