#include <stdio.h>

int main()
{
    int l1;
    int l2;
    int l3;
    printf("inserisci un numero");
scanf(" %d", &l1);
printf("inserisci un altro numero");
scanf(" %d", &l2);
printf("inserisci un terzo numero");
scanf(" %d", &l3);
if(l1+l2>l3 && l2+l3>l1 && l3+l1> l2)
{
    if(l1==l2 && l2==l3)
    {
        printf("equilatero\n");
    }
    else if( l1!=l2 && l2!=l3)
    {
    printf("triangolo scaleno\n");

    }
    else (l1==l2 !=l3)
    {
        printf(" è un triangolo isoscele\n");
    }
}
else
{
    printf("no\n");
}
}