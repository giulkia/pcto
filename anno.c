#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci un anno");
    scanf(" %d", &anno);
    if((anno%4==0 && anno%100 !=0) || anno%400 == 0)
    {
        printf("anno bisestile\n");
    }
    else
    {
    printf("No\n");
    
}
}