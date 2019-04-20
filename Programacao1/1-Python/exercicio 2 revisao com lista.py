def exercicio2 (): #fazer com lista depois
    num=int(input('digite o valor a ser sacado (menor que 600)'))
    valor=num
    lista=[100,50,10,5,1]
    notas=[0,0,0,0,0]
    x=0
    while (num>0):
        if(num-lista[x]>=0):
            notas[x]+=1
            num-=lista[x]
        else:
            x+=1
    print('O Valor de R$',valor,' sera sacado em: ')
    print('notas de 100: ',notas[0])
    print('notas de 50 : ',notas[1])
    print('notas de 10 : ',notas[2])
    print('notas de 5  : ',notas[3])
    print('notas de 1  : ',notas[4])


exercicio2()
