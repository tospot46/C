#include <stdio.h>
#include <stdlib.h>

int main()
{
    float     nbr1;
    float     nbr2;
    float     result;

    printf ("Entre le premier chiffre : ");
    scanf ("%f", &nbr1);
    printf ("Entrer le deuxième chiffre : ");
    scanf ("%f", &nbr2);

    result = nbr1 + nbr2;
    printf("%f\n", result);
    return 0;
}
