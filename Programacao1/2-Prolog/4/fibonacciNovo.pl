%fib(numero,meio,fibonacci)


fib(1,0,0).
fib(2,1,3).
fib(N,M,R):-
	N>1,
	M is N-1,
	X is N-2,
        fib(N,M,X),
        R is  M+X.
