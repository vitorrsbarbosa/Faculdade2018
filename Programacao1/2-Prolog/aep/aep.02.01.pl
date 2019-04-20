italiana(pizza).

italiana(calzone).

italiana(lazanha).

brasileira(X) :- mineira(X).

brasileira(X) :- gaucha(X).

mineira(tutu).

mineira(feijoada).

gaucha(churrascada).

uruguaia(churrascada).

argentina(churrascada).

paraguaia(churrascada).

%nacionalidade(Nome,Nacionalidade)

nacionalidade(marvin,brasileira).
nacionalidade(luiz,italiana).
nacionalidade(jotape,gaucha).
nacionalidade(pedrao,nortenho).
nacionalidade(vitaogatao,nordestino).

%gostacomida(Nome,Comida)

gostacomida(X,Y):-(nacionalidade(X,brasileira),brasileira(Y));
(nacionalidade(X,italiana),italiana(Y));
(nacionalidade(X,paraguaia),paraguaia(Y));
(nacionalidade(X,argentina),argentina(Y));
(nacionalidade(X,uruguaia),uruguaia(Y)).
