#include<stdio.h>


void main()
{
    float salario_funcionario;
    float taxa = 0.035;
    float salario_minimo;
    float diff;

    printf("Insira o valor do salario minimo? \n");
    scanf("%f",&salario_minimo);

    printf("Insira o valor do seu salario? \n");
    scanf("%f",&salario_funcionario);

    diff = salario_funcionario - salario_minimo;

    if (diff > 0)
    {
        float IRS = diff * taxa;
        printf("Vai pagar %f euros de IRS.",IRS);

    }
    

}
