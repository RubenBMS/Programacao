#include<stdio.h>


void main()
{
    
    int idade_pessoa;
    int idade_min = 18;
    int idade_max = 67;
    

    printf("Insira a sua idade: ");
    scanf("%d",&idade_pessoa);

    if ( idade_pessoa >= idade_min && idade_pessoa < idade_max )
    {
        printf("Pode doar sangue.");
    }

    if ( idade_pessoa < idade_min || idade_pessoa >= idade_max )
    {
        printf("Nao pode doar sangue.");
    }

}