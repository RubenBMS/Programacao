#include<stdio.h>

void main()
{
    int mil = 1000;
    int somatorio = 0;

    for ( int i = 1; i <= mil; i++)
    {
        somatorio = somatorio + i ;
    }

    printf("O somatorio e %d", somatorio);

}