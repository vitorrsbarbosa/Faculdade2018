nota(joao,5).
nota(maria,6).
nota(joana,8).
nota(mariana,2).
nota(pedro,-3).
nota(antonio,2).

aprovado(X) :- nota(X,Y),
    Y>=7,
    Y=<10.

reprovado(X) :- nota(X,Y),
    Y>=0,
    Y<5.

recuperacao(X) :- nota(X,Y),
    Y<7,
    Y>=5.

erro(X) :- \+ (aprovado(X);reprovado(X);recuperacao(X) ).

erros(X) :-  nota(X,Y),(Y<0;Y>10).
