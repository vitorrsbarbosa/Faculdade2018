%fatsom(numero,anterior).

fatsom(0,0).
fatsom(NUMERO,RESULTADO) :-
	NUMERO >= 0,
	Y is NUMERO-1,
	fatsom(Y,W),
	RESULTADO is NUMERO+W.
