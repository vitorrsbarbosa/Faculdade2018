def menu ():
    print('| codigo | Produto | Preço |')
    print('|   1    | C.Quente| R$4,00|')
    print('|   2    | X.Salada| R$4,50|')
    print('|   3    | X.Bacon | R$5,00|')
    print('|   4    | Torrada | R$2,00|')
    print('|   5    |  Refri  | R$1,50|')
    print('Digite 0 para finalizar o seu pedido:  |')

def pedido():
    pedido=10
    total=0.00
    while (pedido>0):
        menu()
        pedido=int(input('Digite o código do Pedido: '))
        if (pedido==1):
            total=total+4

        if (pedido==2):
            total=total+4.50

        if (pedido==3):
            total=total+5

        if (pedido==4):
            total=total+2

        if (pedido==5):
            total=total+1.5
    print('O valor do seu pedido é R$',total)

