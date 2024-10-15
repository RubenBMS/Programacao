#include <stdio.h>


void main()
{
    float taxa = 1.17;
    float valorEuros;
    float valorDollars;


    printf("Introduza valor em euros: ");
    scanf("%f",&valorEuros);

    valorDollars = valorEuros * taxa ;

    printf("Valor em dollars= %f.", valorDollars);  



}