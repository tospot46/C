#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine [256];

    printf("entrer une phrase : ");
    gets(chaine);
    printf("%s", chaine);

    return 0;
}
