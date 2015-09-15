#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int multi;
	int table;
	int borneinf;
	int bornesup;
	int result;
	
	printf("Table à afficher : ");
	scanf("%d", &table);
	printf("Borne inferieur : ");
	scanf("%d", &borneinf);
	printf("Borne superieur : ");
	scanf("%d", &bornesup);
	
	for(multi = borneinf; multi <= bornesup; multi++)
	{
		result = multi * table;
		printf("%d \n", result);	
	}
	return (0);
}
