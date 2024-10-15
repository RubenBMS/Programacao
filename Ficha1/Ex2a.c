#include<stdio.h>

void main()
{

    int num1;
    int num2;

    float adicao;
    float subtracao;
    float multi;
    float divi;
    float resto;

    printf("Primeiro numero inteiro:");
    scanf("%f",&num1);

    printf("Segundo numero inteiro:");
    scanf("%f",&num2);

    adicao = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;
    resto = num1 % num2;
    printf("%f",resto);

}