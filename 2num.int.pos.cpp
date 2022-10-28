// Exercicio 02 apostila 01

#include<stdio.h>

int main ()
{
    int numero;

    printf("\n Informe um numero: ");
    scanf("%d",&numero);

    while (numero <= 0);

    {
        printf("\n O numero precisa ser positivo. Digite novamente: ");
        scanf("%d",&numero);
    }

    printf("\n Dobro de %d = %d",numero,numero*2);
    return 0;
}
