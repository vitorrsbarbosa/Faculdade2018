%potencia(Base,Expoente,Potencia)

potencia(_,0,1).
potencia(B,N,P):-
	N>0, M is N-1,
	potencia(B,M,R),
	P is B*R.
