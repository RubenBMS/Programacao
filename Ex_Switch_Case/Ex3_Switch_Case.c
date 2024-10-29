#include <stdio.h>

void main()
{
    float KwConsumidos;
    char tipoCliente;
    float custoTotal;

    printf("Insira tipo client: \n");
    printf("[A] - Particular Continente \n");
    printf("[B] - Particular Ilhas \n");
    printf("[C] - Pequenas Empresas \n");
    printf("[D] - Media e Grandes Empresas \n");
    printf("[E] - Estado e organismos publicos \n");
    scanf("%c", &tipoCliente);
    printf("Insira os KW consumidos: ");
    scanf("%f", &KwConsumidos);

    switch (tipoCliente)
    {
    case 'A':
        custoTotal = (KwConsumidos * 0.1865) * 1.23 ;
        printf("Custo Total e %f EUROS", custoTotal);
        break;
    case 'B':
        custoTotal = (KwConsumidos * 0.1875) * 1.23 ;
        printf("Custo Total e %f EUROS", custoTotal);
        break;
    case 'C':
        custoTotal = (KwConsumidos * 0.1754) * 1.23 ;
        printf("Custo Total e %f EUROS", custoTotal);
        break;
    case 'D':
        custoTotal = (KwConsumidos * 0.1592) * 1.23 ;
        printf("Custo Total e %f EUROS", custoTotal);
        break;
    case 'E':
        custoTotal = (KwConsumidos * 0.1311) * 1.23 ;
        printf("Custo Total e %f EUROS", custoTotal);
        break;
    default:
        printf("Tipo de Cliente Invalido.");
        break;
    }



}