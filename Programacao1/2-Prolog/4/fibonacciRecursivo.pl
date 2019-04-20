%fib(Numero,fibonacci)

fib(1,0).
fib(2,1).
fib(N,R):-
	N>1,
	M is N-1,
	T is N-2,
	fib(M,A),
	fib(T,B),
	R is A+B.
