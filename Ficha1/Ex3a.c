#include<stdio.h>

void main()
{
    float km;
    float litros;
    float consumo100;

    printf("Litros consumidos na viagem: ");
    scanf("%f",&litros);

    printf("Kilometros percurridos na viagem: ");
    scanf("%f", &km);
    consumo100 = ( litros / km ) * 100 ;

    printf("O consumo em media aos 100km e %f.", consumo100);

}
