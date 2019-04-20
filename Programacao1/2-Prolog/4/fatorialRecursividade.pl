%fatorial(Numero,Fatorial)

fatorial(0,1).
fatorial(N,F):-
	N>0,
	M is N-1,
	fatorial(M,R),
	F is N*R.
