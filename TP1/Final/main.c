#include <stdio.h>
#include <stdlib.h>

float somme(float somme1, float somme2)
{
    float result;
    result = somme1 + somme2;
    printf("le resultat est : %f\n", result);
    return (0);
}
float soustraction(float sous1, float sous2)
{
    float result;

    result = sous1 - sous2;
    printf("le resultat est : %f\n", result);
    return(0);
}
float quotient(float num, float denom)
{
    float result;

    if (denom == 0)
    {
        printf("Erreur, le denominateur ne peut etre nul. \n");
    }
    else
    {
        result = num/denom;
        printf("%f", result);
    }
    return 0;

}
float produit(float prod1, float prod2)
{
    float result;

    result = prod1 * prod2;
    printf("Le resultat est : %f\n", result);
}
int main()
{
    char choix;
    char quit;
    float somme1, somme2;
    float sous1, sous2;
    float num, denom;
    float prod1, prod2;

while(quit != 'y')
{
    printf("a) faire la somme des valeurs\n");
    printf("b) faire des soustraction\n");
    printf("c) faire la difference\n");
    printf("d) faire le produit\n");
    printf("Choisissez l'operation a effectuer : ");

    scanf("%c", &choix);

    switch (choix)
    {
        case 'a' :
            printf("Entre le premier chiffre : ");
            scanf("%f", &somme1);
            printf("entre le deuxieme chiffre : ");
            scanf("%f", &somme2);
            somme(somme1, somme2);
        break;
        case 'b' :
            printf("entre le premier chiffre : ");
            scanf("%f", &sous1);
            printf("entre le deuxieme chiffre : ");
            scanf("%f", &sous2);
            soustraction(sous1, sous2);
        break;
        case 'c' :
            printf("entre le premier chiffre : ");
            scanf("%f", &num);
            printf("entre le deuxieme chiffre : ");
            scanf("%f",&denom);
            quotient(num, denom);
        break;
        case 'd' :
            printf("entre le premier chiffre : ");
            scanf("%f", &prod1);
            printf("entre le deuxieme chiffre : ");
            scanf("%f", &prod2);
            produit(prod1, prod2);
        break;

    }
	
	scanf("%c", &quit);
	printf("\n\n");
}
    return 0;
}
