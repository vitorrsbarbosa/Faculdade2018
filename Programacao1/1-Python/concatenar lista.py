def concatenar (lista1,lista2):
    
    lista3=[]
    for x in range (4):
        lista3=lista2[0:1]+lista2[x:1]
        if (x==3):
            lista3=lista3+lista2[2:]
    print(lista3)
    
lista1=[1,2,3]
lista2=['a','b','c','d','e',]

concatenar(lista1,lista2)
