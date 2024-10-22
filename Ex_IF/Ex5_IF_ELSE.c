#include<stdio.h>

void main()
{
    float lado1;
    float lado2;
    float lado3;

    printf("Insira valor do primeiro lado: ");
    scanf("%f",&lado1);

    printf("Insira valor do segundo lado: ");
    scanf("%f",&lado2);

    printf("Insira valor do terceiro lado: ");
    scanf("%f",&lado3);

    if (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {
        if (lado1 < lado2 + lado3)
        {
            /* code */
        }
        else
        {
            printf("Triangulo Invalido");
        }
        
    }
    else
    {
        printf("Triangulo Invalido");
    }
    



}
