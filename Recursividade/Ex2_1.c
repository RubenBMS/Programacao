#include <stdio.h>
#include <string.h>

char *strings(char *dest, char *orig)
{
    //dest = "autonoma"
    // orig = "universidade"
    // result = "universidadeautonoma"
    char aux[15];
    strcpy(aux,dest);
    strcpy(dest,orig);



    strcat(dest,aux);

}


void main()
{
    char palavra1[10], palavra2 [15];
    printf("Insira a palavra 1: ");
    scanf("%s",&palavra1);

    printf("Insira palavra 2:");
    scanf("%s",&palavra2);

    strings(palavra1,palavra2);

    printf("%s ", palavra1);    
    //printf("%s", palavra2);

}