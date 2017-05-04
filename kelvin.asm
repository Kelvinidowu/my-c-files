

INCLUDE 'emu8086.inc'

org 100h          
LEA SI, msg1
CALL print_string
CALL scan_num

MOV al,cl
CALL pthis
DB 13,10,'you entered this value :',0
CALL print_num  

gotoxy 1,2
MOV bl, var1
SUB bl,al    

gotoxy 1,3
MOV cx, 4
print: MOV ah, 2
       MOV dl,'0'
       test bl, 1000b
       jz zero
       MOV dl, '1'
zero: int 21h
      shl bl, 1
      loop print
      MOV dl, 'b'
      INT 21h
      MOV ah,0
      INT 16h 


; add your code here

ret               
msg1 DB 'ENTER NUMBER FOR P:',0
var1 db 16
DEFINE_PRINT_NUM
DEFINE_SCAN_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_PRINT_STRING
DEFINE_PTHIS




