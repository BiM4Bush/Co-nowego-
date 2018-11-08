//Program wczytuje liczbę całkowitš i liczy sumę cyfr z których zbudowana jest liczba.

#include <stdio.h>
int main()
{
    int l,suma=0;

    printf("Podaj liczbe :  ",l);
    scanf("%d",&l);
    while(l!=0)
    {
        suma+=l%10;
        l /= 10;
    }

    printf("Tyle wynosi suma cyfr : %i",suma);

    getchar();
    return 0;
}

