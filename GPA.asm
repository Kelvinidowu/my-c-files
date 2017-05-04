;Idowu Olusegun Kelvin 13/3184
;Ajifa Oluwabori Dave 13/3400
;Nwogu Godswill 14/4401   

include 'emu8086.inc'
org 100h
  msg1 DB 'ENTER THE FIRST SEMESTER 100L GPA ',0
  LEA SI,msg1
  CALL PRINT_STRING 
  CALL SCAN_NUM         
            MOV AX,CX    ;STORES THE VALUE IN AL
            gotoxy 2,2
  LEA SI,msg2
  CALL PRINT_STRING
  CALL SCAN_NUM
            GOTOXY 2,3
            MOV BX,CX    ;COPY'S THE INPUTED VALUE IN BX
            ADD AX,BX    ;ADDS BX TO AX AND STORES IT IN AX
            XOR BX,BX    ;CLEARS BX
  
  LEA SI,msg3
  CALL PRINT_STRING          
  CALL SCAN_NUM
            GOTOXY 2,4
            MOV BX,CX    ;COPY'S THE INPUTED VALUE TO BX
            ADD AX,BX    ;ADDS BX TO AX AND STORES IT IN AX
            XOR BX,BX    ;CLEARS BX
  
  
  LEA SI,msg4
  CALL PRINT_STRING
  CALL SCAN_NUM
            GOTOXY 2,5
            MOV BX,CX    ;COPY'S THE INPUTED VALUE TO BX
            ADD AX,BX    ;ADDS WHAT IS IN BX TO AX AND STORES IT IN AX
            XOR BX,BX    ;CLEARS BX
  
  LEA SI,msg5
  CALL PRINT_STRING
  CALL SCAN_NUM                     
            GOTOXY 2,6
            MOV BX,CX    ;THE INPUTED VALUE IS STORED IN BX
            ADD AX,BX    ;ADDS BX TO AX AND STORES IT IN AX
            XOR BX,BX    ;CLEARS BX
  
  LEA SI,msg6
  CALL PRINT_STRING
  CALL SCAN_NUM          
            GOTOXY 2,7
            MOV BX,CX    ;THE INPUTED VALUE IS STORED IN BX
            ADD AX,BX    ;ADD BX TO AX AND STORES IT IN AX
            XOR BX,BX    ;CLEARS BX      
            label:    
                MOV BX,6
                DIV BX
                
                PRINT 'THE CGPA IS ',0
                GOTOXY 3,8
                CALL PRINT_NUM 
                 JMP EXIT 
                  
 ret
  msg2 DB 'ENTER THE SECOND SEMESTER 100L GPA ',0
  msg3 DB 'ENTER THE FIRST SEMESTER  200L GPA ',0 
  msg4 DB 'ENTER THE SECOND SEMESTER 200L GPA ',0
  msg5 DB 'ENTER THE FIRST SEMESTER  300L GPA ',0
  msg6 DB 'ENTER THE SECOND SEMESTER 300L GPA ',0  
             jmp label
DEFINE_PTHIS
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_SCAN_NUM
DEFINE_PRINT_NUM_UNS
EXIT:
end








