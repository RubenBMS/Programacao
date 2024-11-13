#include <stdio.h>

void main()
{
    int soma = 0;
    float media;
    int numAlunos;
    int notaMax= 0;
    int notaMin= 0;
    int temp;

    printf("Insira o numero de alunos de Geometria: ");
    scanf("%d", &numAlunos);

    for( int i = numAlunos; i > 0; i--)
    {
        printf("Nota do aluno:");
        scanf("%d",&temp);

        if (temp > notaMax)
        {
            notaMax = temp;
        }
        
        if( temp < notaMin || notaMin == 0)
        {
            notaMin = temp;
        }

         soma = soma + temp;

        
    }
    
           

    media = soma / numAlunos;

    printf("A media das notas dos alunos e %f \n", media);
    printf("A nota maxima e %d e a nota minima e %d", notaMax, notaMin);


}