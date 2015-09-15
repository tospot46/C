#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char note;

	printf("Entré votre note en ettres (A B C D E) : ");
	scanf("%c", &note);
	
	switch (note)
	{
		case 'A' : 
			printf("note : [16 ; 20[\n");
		break;
		
		case 'B' : 
			printf("note : [12 ; 16[\n");
		break;
		
		case 'C' : 
			printf("note : [8 ; 12[\n");
		break;
		
		case 'D' :
			printf("note : [4 ; 8[\n");
		break;
		
		case 'E' : 
			printf("note : [0 ; 4[\n");
	}
	return (0);
	
}
