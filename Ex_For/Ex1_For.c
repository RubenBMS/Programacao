#include <stdio.h>

void main()
{
    int num;
    int factorial = 1;

    printf("Insira um numero inteiro:");
    scanf("%d", &num);

    if (num == 0)
    {
        factorial = 1 ;
    }
    else if (num >= 1)
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i ;
        }
        
    }
    else
    {
        printf("Numero Invalido");
    }
    printf("O factorial de %d e %d", num, factorial);

}