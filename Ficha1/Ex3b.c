#include<stdio.h>

void main()
{
    float km;
    float litros;
    float consumo100;
    float preco_litro;
    float preco_viagem;

    printf("Litros consumidos na viagem: ");
    scanf("%f",&litros);

    printf("Preco por litro: ");
    scanf("%f",&preco_litro);

    printf("Kilometros percurridos na viagem: ");
    scanf("%f", &km);

    consumo100 = ( litros / km ) * 100 ;
    preco_viagem = preco_litro * litros ;

    printf("O consumo em media aos 100km e %.1f. O preco total da viagem foi %.2f euros.", consumo100, preco_viagem);

}
