def criarMatriz ():
    matriz=[]
    lista=[0,0,0,0]
    for x in range (4):
        lista[x]=[]
        for y in range(4):
            lista[x] += [input('Digite um Numero: ')]
        matriz+=[lista[x]]
    return(matriz)

def mostraMatriz (matriz):
    for x in range(4):
        print(matriz[x])

def transporMatriz (matriz):
    




matriz=criarMatriz()
mostraMatriz(matriz)
