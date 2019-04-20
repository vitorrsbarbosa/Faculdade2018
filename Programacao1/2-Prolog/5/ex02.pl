%ligado(inicio,fim,distancia).

ligado(a,b,5).
ligado(c,d,10).
ligado(g,f,20).
ligado(b,e,5).
ligado(a,c,10).
ligado(d,g,15).
ligado(e,f,5).
ligado(b,f,25).
ligado(a,g,75).
ligado(d,e,5).
ligado(b,f,25).

rota(a,b,25).
rota(a,d,23).
rota(d,c,14).
rota(d,f,30).
rota(c,f,28).
rota(c,b,19).
rota(b,e,32).
rota(e,f,26).


rota(X,Y,C) :- ligado(X,Y,C).
rota(X,Y,C) :- ligado(X,Z,C1),
	rota(Z,Y,C2),
	C is C1+C2.
