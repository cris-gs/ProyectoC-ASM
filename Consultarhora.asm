org 100h 
org 100h

;GUARDAMOS VARIABLES EN HEXADECIMAL
;Servivio Hora
mov ah, 2Ch
int 21h

mov offset horas, ch
mov offset minutos, cl
mov offset segundos, dh


;----------------------------------------------------------------- 


Mostrar_Hora:

;Obtener el número de la hora
;Comparamos si es mayor o igual a 12 para cambiar formato
;mov ah, 09
;mov dx, offset msj_hora
;int 21h
mov al, [horas]
;cmp al, 0Ch
;jae cambia_formato
;formato_normal:
;mov tipo_formato, 0 ;El formato es "AM"
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset horas_conv
mov [bx], al
inc bx
mov [bx], ah
;mov ah, 09
;mov dx, offset horas_conv
;int 21h

Mostrar_minutos:
;Obtener el número de minutos
;Hacer lo mismo que con el día del mes
;mov ah, 09
;mov dx, offset msj_separador
;int 21h
mov al, [minutos]
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset min_conv
mov [bx], al
inc bx
mov [bx], ah
;mov ah, 09
;mov dx, offset min_conv
;int 21h

Mostrar_segundos:
;Obtener el número de segundos
;Hacer lo mismo que con minutos
;mov ah, 09
;mov dx, offset msj_separador
;int 21h
mov al, [segundos]
mov cl, 10
mov ah, 0
div cl
or ax, 3030h
mov bx, offset seg_conv
mov [bx], al
inc bx
mov [bx], ah
;mov ah, 09
;mov dx, offset seg_conv
;int 21h
;mov bx, offset tipo_formato
;add bl, formato 
;mov horario_conv, bx
;mov dx, horario_conv 
;int 21h
jmp inicio

;cambia_formato:
;sub al, 0Ch
;mov formato, 4 ;El formato es "PM"
;jmp formato_normal

org 100h 
                    
        
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

;Variables para guardar los valores en hexadecimal
horas DB ?, '$'
minutos DB ?, '$'
segundos DB ?, '$'
;dia_semana DB ?, '$'
;dia_mes DB ?, '$'
;mes DB ?, '$'
;anio DB ?, ?, '$'
formato DB ?

;Variables convertidas a ASCII
;dia_mes_conv DB ?, ?, " de ", '$'
;anio_conv DB ?, ?, '$'
horas_conv DB ?, ?, '$'
min_conv DB ?, ?, '$'
seg_conv DB ?, ?, '$'
;horario_conv DW ?, ?, '$'

dig1 DB ?, '$'
dig2 DB ?, '$'
dig3 DB ?, '$'
dig4 DB ?, '$'

;Variables que contienen cadena de caracteres
;msj_dia_semana = 10 caracteres por casilla
;msj_dia_semana = 11 caracteres por casilla
;msj_hora DB "Hora: ",'$'
;msj_separador DB " :",'$'
;msj_dia_semana DB "Domingo $","Lunes $","Martes $","Miercoles$","Jueves $","Viernes $","Sabado $"
;msj_mes DB "Enero $","Febrero $","Marzo $","Abril $","Mayo $","Junio $",
;DB "Julio $", "Agosto $","Septiembre$","Octubre $","Noviembre $","Diciembre $"
;tipo_formato DB " am$", " pm$"
;salto_linea DB 0Ah, 0Dh,'$' 

;-----------------------------------------------------------------   
directorio db 'E:\test',0 
archivo db 'E:\test\prueba.txt',0
cadena db 'Hola mundo',0
numBytes dw $ - offset cadena  
handler dw ?
msgError1 db 'Error: No se puede crear el archivo', 10,13, '$'
msgError2 db 'Error: No se puede escribir en el archivo', 10,13, '$'

                    
        



