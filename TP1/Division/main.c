#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numerateur;
    float denominateur;
    float result;

    printf("entre le numerateur : ");
    scanf("%f", &numerateur);
    printf("entre le denominateur : ");
    scanf("%f", &denominateur);

    if (denominateur == 0)
    {
        printf("Erreur, le denominateur ne peut etre nul. \n");
    }
    else
    {
        result = numerateur/denominateur;
        printf("%f", result);
    }
    return 0;
}
