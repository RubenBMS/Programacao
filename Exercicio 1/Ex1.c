#include<stdio.h>
void main()
{
    
    // 0- Declarar variaveis
    float nota1;
    float nota2;
    float media;
    // 1- Recolher notas 1 e 2
    printf("Insira a nota do teste 1:");
    scanf("%f",&nota1);
    printf("Insira a nota do teste 2:");
    scanf("%f",&nota2);
    
    // 2- Calcular média dos testes
    media = (nota1 + nota2)/ 2 ;


    // 3- Apresentar resultado da media
    printf("Media %f \nTeste 1: %f \nTeste 2: %f",media ,nota1 ,nota2 );
    
}

