         
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
include 'emu8086.inc'
org 100h
CALL PTHIS
DB 13,10, 'Input 100.1 GPA: ',0
CALL SCAN_NUM
MOV AX,CX 

CALL PTHIS
DB 13,10, 'Input 100.2 GPA: ',0
CALL SCAN_NUM
ADD AX,CX

CALL PTHIS
DB 13,10, 'Input 200.1 GPA: ',0
CALL SCAN_NUM
ADD AX,CX

CALL PTHIS
DB 13,10, 'Input 200.2 GPA: ',0
CALL SCAN_NUM
ADD AX,CX

CALL PTHIS
DB 13,10, 'Input 300.1 GPA: ',0
CALL SCAN_NUM
ADD AX,CX

CALL PTHIS             

DB 13,10, 'Input 300.2 GPA: ',0
CALL SCAN_NUM
ADD AX,CX

MOV BX, 6
DIV BX

CALL PTHIS
DB 13,10, 'The CGPA is: ',0
CALL  PRINT_NUM

ret
DEFINE_PTHIS
DEFINE_SCAN_NUM
DEFINE_PRINT_NUM 
DEFINE_PRINT_NUM_UNS
END