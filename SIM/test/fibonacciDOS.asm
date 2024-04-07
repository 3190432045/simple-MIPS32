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

; 15   :     int first = 0, second = 1, next = 0;

	mov	DWORD PTR _first$[ebp], 0
	mov	DWORD PTR _second$[ebp], 1
	mov	DWORD PTR _next$[ebp], 0
$L36:

; 16   :
; 17   :
; 18   :     for (; next != 28657;)

	cmp	DWORD PTR _next$[ebp], 28657		; 00006ff1H
	je	SHORT $L37

; 20   :         next = first + second;

	mov	eax, DWORD PTR _first$[ebp]
	add	eax, DWORD PTR _second$[ebp]
	mov	DWORD PTR _next$[ebp], eax

; 21   :         first = second;

	mov	ecx, DWORD PTR _second$[ebp]
	mov	DWORD PTR _first$[ebp], ecx

; 22   :         second = next;

	mov	edx, DWORD PTR _next$[ebp]
	mov	DWORD PTR _second$[ebp], edx

; 23   :
; 24   : //        printf("%d\n", next);
; 25   :     }

	jmp	SHORT $L36
$L37:

; 26   : }

	mov	esp, ebp
	pop	ebp
	ret	0
_fibonacci ENDP
_TEXT	ENDS
