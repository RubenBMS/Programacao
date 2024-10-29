#include <stdio.h>

void main()
{
    int idade;
    printf("Insira a idade do atleta: ");
    scanf("%d", &idade);
    switch (idade)
    {
        case 11:
        case 12:
            printf("A categoria e juvenil. A taxa de inscricao e gratuita.");
            break;    
        case 13:
        case 14:
        case 15:
            printf("A categoria e juvenil.");
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("A categoria e junior.");
            break;  
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            printf("A categoria e profissional.");
            break;
        default:
            printf("Idade Invalida.");
            break;
    }

}