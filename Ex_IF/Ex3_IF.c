#include<stdio.h>

void main()
{
    float n1;
    float n2;

    printf("Insira o primeiro numero: ");
    scanf("%f", &n1 );

    printf("Insira o segundo numero: ");
    scanf("%f", &n2 );

    if ( n1 < n2 )
    {
        printf("O Numero maior e : %f \n",n2);
        printf("O Numero menor e : %f \n",n1);
    }

        if ( n1 > n2 )
    {
        printf("O Numero maior e : %f \n",n1);
        printf("O Numero menor e : %f \n",n2);
    }

}