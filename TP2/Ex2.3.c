#include <stdio.h>
#include <stdlib.h>

int	main()
{
	float note;
	
	printf("Entré la note : ");
	scanf("%f", &note);
	if (note >= 0 && note < 4)
	{
		printf("E\n");
	}
	else if (note >= 4 && note < 8)
	{
		printf("D\n");
	}
	else if (note >= 8 && note < 12)
	{
		printf("C\n");
	}
	else if (note >=12 && note < 16)
	{
		printf("B\n");
	}
	else
	{
		printf("A\n");
	} 
}
