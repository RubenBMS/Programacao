#include <stdio.h>

float power( float base, float exp);


void main()
{
    float valor1 ,valor2 ;

    printf("Insira a base: ");
    scanf("%f", &valor1);

    printf("Insira o expoente: ");
    scanf("%f", &valor2);

    float resultado = power (valor1,valor2);
    printf("Resultado : %f", resultado);
}

float power( float base, float exp)
{
    float result = 1;
    for (float i = exp; i > 0; i--)
    {
        result = result * base  ;
    }
    
    return result ;

}