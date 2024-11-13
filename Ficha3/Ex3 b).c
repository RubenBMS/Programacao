#include <stdio.h>

void main()
{
    float soma = 0;
    float media;
    float numAlunos = 0;
    float notaMax= 0;
    float notaMin= 0;
    float temp = 0;

    printf("Insira as notas dos alunos de Geometria:\n");
    

    while (temp <= 20)
    {
        printf("Nota do aluno:");
        scanf("%f",&temp);
        if(temp <= 20 && temp >= 0)
        {
            if (temp > notaMax)
            {
                notaMax = temp;
            }
            
            if( temp < notaMin || notaMin == 0)
            {
                notaMin = temp;
            }

            soma = soma + temp;
            numAlunos = numAlunos + 1 ;
        }    
        
    }

           
    if(numAlunos > 0)
    {
        media = soma / numAlunos;
    }


    printf("A media das notas dos alunos e %.2f \n", media);
    printf("A nota maxima e %.2f e a nota minima e %.2f", notaMax, notaMin);


}