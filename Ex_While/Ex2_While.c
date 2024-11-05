#include<stdio.h>

void main()
{
    int num = 0;
    int somatorioPares = 0;



    while(num >= 0)
    {
        printf("Inserir numero natural: ");
        scanf("%d",&num);


        if (num % 2 == 0 && num >= 0)
        {
            somatorioPares += num;

        }
    }
    printf("Somatorio pares: %d", somatorioPares);
}