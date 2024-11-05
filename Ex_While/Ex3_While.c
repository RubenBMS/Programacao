#include<stdio.h>

void main()
{
    float temperatura, mediaTemperaturas, maxTemperaturas, somatorioTemperaturas = 0;
    int nrRegistos;
    int nrDias = 0;
    printf("Quantos registos quer guardar: ");
    scanf("%d",&nrRegistos);

    //condicao de paragem
    while(nrDias != nrRegistos)
    {


        printf("Insira temperatura: ");
        scanf("%f", &temperatura);


        //incrementar nr dias

        nrDias = nrDias + 1;


        //verificar se a temperatura e max
        if(maxTemperaturas < temperatura)
        {
            maxTemperaturas = temperatura;
        }

        //calcular soma temperatura
        somatorioTemperaturas = somatorioTemperaturas + temperatura;


        
    }
    //mediaTemperaturas = Soma(temperaturas)/nrdias

    mediaTemperaturas = somatorioTemperaturas / nrDias ;

    printf("A media registada em %d dias foi %.1f graus. \n" ,nrDias ,mediaTemperaturas);
    printf("Temperatura maxima foi %.1f.", maxTemperaturas);

}