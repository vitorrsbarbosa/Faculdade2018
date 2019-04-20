pai(antonio, rui).
pai(antonio, sandra).
mae(maria, rui).
mae(maria, sandra).

feminino(maria).
feminino(sandra).
masculino(antonio).
masculino(rui).

filho(X,Y):-pai(Y,X),masculino(X).
filho(X,Y):-mae(Y,X),masculino(X).

filha(X,Y):-pai(Y,X),feminino(X).
filha(X,Y):-mae(Y,X),feminino(X).

progenitor(X,Y):-pai(X,Y).
progenitor(X,Y):-mae(X,Y).

filho(X,Y):-progenitor(Y,X),masculino(X).
filha(X,Y):-progenitor(Y,X),feminino(X).

irmao(X,Y):-masculino(X),progenitor(F,X),progenitor(F,Y),not(X==Y).
irma(X,Y):-feminino(X),progenitor(F,X),progenitor(F,Y),not(X==Y).

avo(X,Z):-pai(X,Y),pai(Y,Z).

tio(Z,X):-filho(X,Y),irmao(Z,Y).
tia(Z,X):-filho(X,Y),irma(Z,Y).
