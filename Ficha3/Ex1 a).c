#include<stdio.h>

void main()
{
    int num1;
    int num2;
    int max;
    int min;
    int sum = 0; 
    int qtd = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);

    printf("Insira um numero inteiro: ");
    scanf("%d", &num2);


    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;

    }

    for (int i = max; i >= min; i--)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
            qtd = qtd + 1 ;
        }
    }
    
    printf("O somatorio e %d \n", sum);
    printf("A quantidade de impares e %d", qtd);

    

}