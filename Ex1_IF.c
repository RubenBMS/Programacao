#include<stdio.h>
void main()
{
    int numero;


    printf("Insira numero inteiro: ");
    scanf("%d",&numero);

    if (numero % 3 == 0)
    {
        numero = numero + 1 ;
        printf("Numero e divisivel");
    }

}