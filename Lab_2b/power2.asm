;Assembly Version of Code to Figure out if a number (positive 2's complement integer) 
;is a power of 2 => only one 1 bit. 
; Code starts @ x3000
;Input: positive two's complement number stored in x3050 (doesn't handle 0 case properly)
; Output: 1 @ x3051 = power of two; 0 @ x3051 = not a power of two

        .ORIG   x3000
        AND     R2, R2, #0  ; R2<-0
        LDI     R0, INPUT   ;R0<-M[x3050] == R0<-(#)
        BRz     #4          ; If R0 = 0, store right away (not a power of 2)
        ADD     R1, R0, #-1 ; R1<-R0-#1
        AND     R0, R0, R1  ; R0<-R0 AND R1
        BRnp    #1          ; If R0 not 0, skip next line (not power of 2)
        ADD     R2, R2, #1  ; R2<-R2+#1 == R2<-1 (is power of 2)
        STI     R2, OUTPUT  ; M[x3051]<-R2
        HALT    
        
        ;hardcoded values
INPUT   .FILL   x3050      
OUTPUT  .FILL   x3051       

        .END