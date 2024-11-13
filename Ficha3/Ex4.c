#include <stdio.h>

void main()
{
    char w = "a" ;
    
    printf("--------------Menu----------------\n");
    printf("\n");
    printf("            <c> Clientes\n");
    printf("            <f> Fornecedores\n");    
    printf("            <h> Bancos\n");
    printf("            <s> Sair\n");
    printf("\n");

    while(w != "s")
    {
        printf("                        opcao: <"); 
        
        scanf("%s", &w);
        printf("                        opcao: <%c>\r",w);
    }

    printf("\n");
    printf("Regresse em breve....");
    
}