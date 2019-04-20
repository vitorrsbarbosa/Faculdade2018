def alunos(media):
    alunos={'maria':{'n1':int(input('qual é a primeira nota')),'n2':int(input('qual é a segunda nota')),'n3':int(input('qual é a terceira nota')),'n4':int(input('qual é a quarta nota'))},'joao':{'n1':int(input('qual é a primeira nota')),'n2':int(input('qual é a segunda nota')),'n3':int(input('qual é a terceira nota')),'n4':int(input('qual é a quarta nota'))}}
    media=(n1+n2+n3+n4)/4
    print('as notas da maria são 1:{}, 2:{},3:{},4:{} e a media é {}'.format(n1,n2,n3,n4,media))
    return media;
