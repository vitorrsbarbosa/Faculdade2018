i=0
n=[0,0,0,0]
media=0
for i in range(4):
    n[i]=(float(input('Digite as notas: ')))
    media=media+n[i]

for lista in n:
    print('nota: ',lista)

print('media: ',media/4)
