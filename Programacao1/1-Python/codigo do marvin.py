#--------------------------Funções-----------------------------------#
def pegaListaInteira(tamanho):
    lista = []
    for i in range(tamanho):
        lista += [int(input("Informe um numero :"))]

    return lista

def pegaListaFloat(tamanho):
    lista = []
    for i in range(tamanho):
        lista += [float(input("Informe um numero :"))]

    return lista

def pegaListaChar(tamanho):
    lista = []
    while(len(lista)<tamanho):
        lista += [input("Informe um caracter :")]

    return lista

def printaLista(lista):
    for i in lista:
        print (i)

def printaListaInvertida(lista):
    lista.reverse()
    for i in lista:
        print (i)

def calculaMedia(lista):
    media = 0
    for i in range(4):
        media += float(lista[i])

    print("A media é :",media/4)


def testaConsoantes(lista):
    consoantes = []
    consoante = 0
    for i in lista:
        if(i !='a' and i != 'e' and i != 'i' and i != 'o' and i != 'u'):
            consoante += 1
            consoantes += i

    print ("Numero de consoantes :",consoante)
    print (consoantes)

#--------------------------Exercicios-----------------------------------#
print("Exercicio 1")
lista = pegaListaInteira(5)
printaLista(lista)

print("Exercicio 2")
lista = pegaListaFloat(5)
printaListaInvertida(lista)

print("Exercicio 3")
lista = pegaListaFloat(4)
calculaMedia(lista)

print("Exercicio 4")
lista = pegaListaChar(10)
testaConsoantes(lista)

