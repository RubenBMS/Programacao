#include <stdio.h>


float media(float val1, float val2, float val3);

void main()
{
    float valor1 ,valor2 , valor3 ;

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    printf("Insira o terceiro valor: ");
    scanf("%f", &valor3);


    float Final =  media(valor1,valor2,valor3);

    printf("Valor Medio : %f", Final);

}


float media (float val1, float val2, float val3)
{
    float valMedia = (val1 + val2 + val3)/ 3 ;

    return valMedia;
}