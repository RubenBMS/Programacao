#include <stdio.h>


void main()
{
    int numeros[10];
    //prencher array
    // 1 pos = 100
    // a cada pos incrementar +10

    //interar sobre o array e imprimir valor cada posiçao na consola

    for (int i = 0; i < 10; i++)
    {
        numeros[i] = 100 + 10 * i ;
        printf("numeros[%d]=%d \n",i,numeros[i]);
    }
    
}