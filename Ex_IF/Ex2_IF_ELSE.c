#include<stdio.h>

void main()
{
    int num;

    printf("Insira um numero inteiro positivo ou negativo: ");
    scanf("%d", &num);

    if (num != 0)
    {
        if( num > 0)
        {
            printf("Numero e positivo.");
        }
        else
        {
            printf("Numero e negativo.");
        }

    }
    else
    {
        printf("Numero inserido e igual a 0.");
    }
    


}