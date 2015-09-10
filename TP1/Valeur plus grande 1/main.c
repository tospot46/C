#include <stdio.h>
#include <stdlib.h>

int main()
{
    float       valeur1;
    float       valeur2;

    printf("entre un premier nombre : ");
    scanf ("%f", &valeur1);
    printf("entre un deuxieme nombre : ");
    scanf ("%f", &valeur2);

        if (valeur1 > valeur2)
        {
            printf("la valeur 1 est la plus grande elle : %f > %f \n", valeur1, valeur2);
        }
        else if (valeur1 == valeur2)
        {
            printf("les deux nombre sont égaux \n");
        }
        else
        {
            printf("la valeur 2 est la plus grande : %f > %f \n", valeur2, valeur1);
        }
    return (0);
}
