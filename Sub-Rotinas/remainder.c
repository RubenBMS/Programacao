#include <stdio.h>

void main()
{
    int valor1 ,valor2 ;

    printf("Insira 1: ");
    scanf("%d", &valor1);

    printf("Insira 2: ");
    scanf("%d", &valor2);

    int resultado = valor1 % valor2 ;

    printf("Remainder = %d", resultado);


}