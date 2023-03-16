#include <stdio.h>

int main()
{
    char stringa[]= "";
    int i = 0;
    printf("inserisci una parola ciao");
    scanf("%s" , stringa);
    int n;
    while(stringa[i] != '\0')
    {

        i++;
    }
    printf( "la parola %s e lunga %d , ciao\n " , stringa, i);

    }
