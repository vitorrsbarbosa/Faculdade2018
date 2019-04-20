n=[]
i=0
c=0
for i in range(10):
    n+=input('Digite uma letra: ')

for lista in n:
    if (lista!='a' and lista!='e' and lista!='i' and lista!='u' and lista!='o'):
        c=c+1
        print(lista)

print('A quantidade de consoante é: ',c)
