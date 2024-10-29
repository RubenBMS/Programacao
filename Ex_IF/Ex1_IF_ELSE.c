#include<stdio.h>

void main()
{
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    if( num % 2 == 0)
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero e impar.");
    }


}