#include <stdio.h>

void main()
{
    int num1;
    
    int primo = 3 ;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);
    
    int i = num1;
    
    while (i != 0)
    {
        if (num1 % i == 0 || i == 1 )
        {
            //printf("%d",i);
            primo = primo - 1 ;
            printf("X e divisivel por %d \n", i);
        }
        i = i - 1;
    }
    if (primo == 1)
    {
        printf("%d E um numero primo", num1);
    }
    else
    {
        printf("%d NAO e um numero primo", num1);
    }
    

}