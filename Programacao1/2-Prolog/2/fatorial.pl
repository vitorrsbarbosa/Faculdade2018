%fat(numero,resposta).

fat(0,1).

fat(N,F):-
    N>0,
    M is N-1,
    fat(M,R),
    F is N*R.
