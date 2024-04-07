PUBLIC	_fibonacci
_TEXT	SEGMENT
_first$ = -4
_second$ = -8
_next$ = -12
_fibonacci PROC NEAR

; 14   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 12					; 0000000cH

; 15   :     register int first = 0, second = 1, next = 0;

	mov	DWORD PTR _first$[ebp], 0
	mov	DWORD PTR _second$[ebp], 1
	mov	DWORD PTR _next$[ebp], 0
$loop_body$35:

; 16   :
; 17   :
; 18   : loop_body:
; 19   :     if( next == 28657)

	cmp	DWORD PTR _next$[ebp], 28657		; 00006ff1H
	jne	SHORT $L36

; 20   :         goto loop_end;

	jmp	SHORT $loop_end$37
$L36:

; 21   :     next = first + second;

	mov	eax, DWORD PTR _first$[ebp]
	add	eax, DWORD PTR _second$[ebp]
	mov	DWORD PTR _next$[ebp], eax

; 22   :     first = second;

	mov	ecx, DWORD PTR _second$[ebp]
	mov	DWORD PTR _first$[ebp], ecx

; 23   :     second = next;

	mov	edx, DWORD PTR _next$[ebp]
	mov	DWORD PTR _second$[ebp], edx

; 24   : //    printf("%d\n", next);
; 25   :     goto loop_body;

	jmp	SHORT $loop_body$35
$loop_end$37:

; 26   :
; 27   : loop_end:
; 28   :     return;
; 29   : }

	mov	esp, ebp
	pop	ebp
	ret	0
_fibonacci ENDP
_TEXT	ENDS
