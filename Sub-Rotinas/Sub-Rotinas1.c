#include <stdio.h>

int soma(int n1 ,int n2);

void main()
{
    int a , b ;

    printf("Insira o valor 1:\n");
    scanf("%d", &a);

    printf("Insira o valor 2:\n");
    scanf("%d", &b);

    int resSOMA = soma( a , b ) ;

    printf("O resultado e %d.", resSOMA);




}   


int soma (int n1, int n2)
{
    /*int res = n1 + n2 ;
    return res ;*/

    return n1 + n2 ;
}