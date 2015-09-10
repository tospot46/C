#include <stdio.h>
#include <stdlib.h>

int main()
{

    char prenom [256];
    char nom [256];

    printf("Votre prenom : ");
    scanf("%s", &prenom);
    printf("Votre nom : ");
    scanf("%s", nom);
    printf("Bonjour, %s %s", prenom, nom);

    return 0;
}
