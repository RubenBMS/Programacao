#include<stdio.h>

void main()
{
    float NF;
    float T1;
    float T2;
    
    char aluno[100];
    char disciplina[100];

    printf("Pretende efetuar o calculo para que disciplina: ");
    scanf("%s", disciplina);

    printf("Insira o nome do aluno: ");
    scanf("%s", aluno);



    printf("Insira a nota do teste 1: ");
    scanf("%f", &T1);

    printf("Insira a nota do teste 2: ");
    scanf("%f", &T2);

    NF = T1 * 0.4 + T2 * 0.6 ;

    printf("A nota final de %s do aluno %s e %f.",disciplina, aluno, NF);
}