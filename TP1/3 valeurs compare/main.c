#include <stdio.h>
#include <stdlib.h>

int	main()
{
	
	float	valeur1;
	float	valeur2;
	float	valeur3;
	
	printf("entre la premiere valeur : ");
	scanf("%f", &valeur1);
	printf("entre la deuxieme valeur : ");
	scanf("%f", &valeur2);
	printf("entre la troisieme valeur : ");
	scanf("%f", &valeur3);
	
	if ( valeur1 > valeur2 && valeur1 > valeur3 )
	{
		printf("la valeur 1 est la plus grande %f \n", valeur1);
	}
	else if ( valeur2 > valeur1 && valeur2 > valeur3 )
	{
			printf("la valeur 2 est la plus grande %f \n", valeur2);
	}
	else if (valeur1 == valeur2 && valeur1 == valeur3)
	{
			printf("les valeurs sont egales \n");
	}
	else
	{
		printf("la valeur 3 est la plus grande %f \n", valeur3);
	}
	return 0;
}
