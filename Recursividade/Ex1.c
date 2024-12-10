#include <stdio.h>


int pot (int base,int exp)
{
    if ( exp == 0)
    {
        return 1;
    }
    else if( exp >= 1)
    {   
        return base * pot(base, exp-1);
    }
    else
    {
        return 0;
    }
}

void main()
{
    int base, e, result;

    printf("Insira base: ");
    scanf("%d",&base);

    printf("Insira expoente: ");
    scanf("%d",&e);

    result = pot(base,e);

    printf("O resultado e %d ", result);

}