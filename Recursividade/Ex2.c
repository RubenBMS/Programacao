#include <stdio.h>
#include <string.h>

char *FirstVogal(char *s)
{

    for(int i = 0 ; i < strlen(s);i++)
    {
        if (s[i]=='A' || s[i]== 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            return &s[i];
        }
        
    }

    return NULL;


}   



void main()
{
    char word[15];

    printf("Insira uma palavra:");
    scanf("%c",&word);
    strupr(word);
    int *address = FirstVogal(word);

    printf("%c", *address);
    //printf("%c", *word);
    //printf("%c", *&word[0]);


}