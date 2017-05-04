;Idowu Olusegun Kelvin 13/3184
;Ajifa Oluwabori Dave 13/3400
;Nwogu Godswill 14/4401 



include 'emu8086.inc'
org 100h   

CALL PTHIS
DB 13, 10, 'Enter the first value : ',0
CALL SCAN_NUM
MOV AX,CX

CALL PTHIS
DB 13,10, 'Enter the second value: ',0
CALL SCAN_NUM
MOV BX,CX

CMP AX,BX

JE equals
JG greater
JL less

equals:
gotoxy 1,3  
CALL PRINT_NUM
CALL PTHIS
DB ' is equal to ',0
CALL PRINT_NUM 
gotoxy 1,4
CALL PRINT_NUM
CALL PTHIS
DB ' is not less than ',0
CALL PRINT_NUM  
gotoxy 1,5
CALL PRINT_NUM
CALL PTHIS
DB ' is not greater than ',0
CALL PRINT_NUM 
JMP stop 

greater:
gotoxy 1,3  
CALL PRINT_NUM
CALL PTHIS
DB ' is greater than ',0 
MOV CX, AX
MOV AX, BX
CALL PRINT_NUM 
gotoxy 1,4 
MOV AX, CX
CALL PRINT_NUM
CALL PTHIS
DB ' is not equal to ',0   
MOV AX, BX
CALL PRINT_NUM  
gotoxy 1,5  
MOV AX, CX
CALL PRINT_NUM
CALL PTHIS
DB ' is not less than ',0  
MOV AX, BX
CALL PRINT_NUM 
JMP stop 

less:
gotoxy 1,3  
CALL PRINT_NUM
CALL PTHIS
DB ' is less than ',0
MOV CX, AX
MOV AX, BX
CALL PRINT_NUM 
gotoxy 1,4 
MOV AX, CX
CALL PRINT_NUM
CALL PTHIS
DB ' is not equal to ',0   
MOV AX, BX
CALL PRINT_NUM  
gotoxy 1,5 
MOV AX, CX
CALL PRINT_NUM
CALL PTHIS
DB ' is not greater than ',0 
MOV AX, BX
CALL PRINT_NUM 
JMP stop 

stop:
ret
DEFINE_PTHIS     
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
END
