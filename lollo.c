#include <stdio.h>

int main()
{
    char stringa[]="";
    printf("inserisci una parola e te la diro al contrario"); 
    scanf(" %s", stringa);
    int i = 0;
    while(stringa[i]!= '\0')
    {
        i++;
    }
    while(i >= 0)
    {
        printf("%c", stringa[i]);
        i--;
    }
    printf("la tua parola al contrario e %c\n", stringa[i]);
}

