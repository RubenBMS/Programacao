#include<stdio.h>


void main()
{
    float nota1;
    float nota2;
    float media;

    printf("Insira a nota do primeiro teste: ");
    scanf("%f", &nota1);

    if(nota1 < 8.5 )
    {
        printf("Aluno Reprovado. Primeira nota inferior a 8.5 valores.");

    }
    else
    {
        printf("Insira a nota do segundo teste: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2 ;
        
        if(nota2 < 9 || media < 10)
        {
            printf("Aluno Reprovado. Media inferior a 10 valores.");
        }
        else
        {
            if (media >= 17)
            {
                printf("Aluno tem que fazer a defesa oral.");
            }
            else
            {
                printf("O aluno foi aprovado com a media de %f.", media);
            }
        }
    }
}