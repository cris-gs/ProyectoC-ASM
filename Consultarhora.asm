org 100h 


mov ah, 2Ch
int 21h

mov offset horas, ch
mov offset minutos, cl
mov offset segundos, dh


;----------------------------------------------------------------- 


Mostrar_Hora:
mov al, [horas]
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset horas_conv
mov [bx], al
inc bx
mov [bx], ah

Mostrar_minutos:
mov al, [minutos]
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset min_conv
mov [bx], al
inc bx
mov [bx], ah

Mostrar_segundos:
mov al, [segundos]
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset seg_conv
mov [bx], al
inc bx
mov [bx], ah
jmp inicio

                    
        
inicio:
    mov ah, 39h
    mov dx, offset directorio
    int 21h
    
    mov ah, 3Ch
    mov cx, 0
    mov dx, offset archivo
    int 21h
    jc error
    mov handler, ax
    mov ah, 40h
    mov bx, handler
    mov cx, numBytes
    mov dx, offset horas_conv   
    int 21h
    jc error2
    mov ah, 3eh
    mov bx, handler 
    jmp fin
    
error:
    mov ah, 9
    mov dx, offset msgError1
    int 21h
    jmp fin
    
error2:       
    mov ah, 9
    mov dx, offset msgError2
    int 21h
fin:
    ret




;****************************** FIN *************************

horas DB ?, '$'
minutos DB ?, '$'
segundos DB ?, '$'
formato DB ?

horas_conv DB ?, ?, '$'
min_conv DB ?, ?, '$'
seg_conv DB ?, ?, '$'

dig1 DB ?, '$'
dig2 DB ?, '$'
dig3 DB ?, '$'
dig4 DB ?, '$'

;-----------------------------------------------------------------   
directorio db 'E:\test',0 
archivo db 'E:\test\prueba.txt',0
cadena db 'Hola mundo',0
numBytes dw $ - offset cadena  
handler dw ?
msgError1 db 'Error: No se puede crear el archivo', 10,13, '$'
msgError2 db 'Error: No se puede escribir en el archivo', 10,13, '$'

                    
        



