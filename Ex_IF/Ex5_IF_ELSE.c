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

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
    {
        if(lado1 == lado2 && lado1 == lado3)
        {
            printf("Triangulo e equilatero");
        }
        else
        {
            if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
            {
                printf("Triangulo e isosceles");
            }
            else
            {
                printf("Triangulo e escaleno");
            }
        }
    }
    else
    {
        printf("Triangulo Invalido");
    }          
}
