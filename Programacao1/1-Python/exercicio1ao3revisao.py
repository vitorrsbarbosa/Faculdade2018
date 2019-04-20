def exercicio1 ():
    num=int(input('digite um numero: '))
    for x in range (1,num):
        lista=[]
        lista+=[x]
        print(lista*x)



def exercicio2 (): #fazer com lista depois
    num=int(input('digite o valor a ser sacado (menor que 600)'))
    valor=num
    notas100=0
    notas50=0
    notas10=0
    notas5=0
    notas1=0
    while (num>600):
        num=int(input('digite o valor a ser sacado (menor que 600)'))

    while (num-100>=0):
        num=num-100
        notas100+=1

    while (num-50>=0):
        num=num-50
        notas50=notas50+1

    while (num-10>=0):
        num=num-10
        notas10=notas10+1

    while (num-5>=0):
        num=num-5
        notas5=notas5+1

    while (num-1>=0):
        num=num-1
        notas1=notas1+1

    print('O Valor de R$',valor,' sera sacado em: ')
    print('notas de 100: ',notas100)
    print('notas de 50 : ',notas50)
    print('notas de 10 : ',notas10)
    print('notas de 5  : ',notas5)
    print('notas de 1  : ',notas1)


def exercicio3 ():
    A=int(input('valor A:'))
    B=int(input('valor B:'))
    C=int(input('valor C:'))
    D=int(input('valor D:'))
    if (B>C and D>A and (C+D)>(A+B) and C>0 and D>0 and A%2==0):
        print('valores aceitos')    
    else:
        print('valores não aceitos')
