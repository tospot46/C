#include <stdio.h>
#include <stdlib.h>

int	conversion(int celcius)
{	
	float kel;
	kel = celcius + 273.15;
	printf("la temperature  equivalente en kelvin  est : %f \n", kel); 
	return (0);
}
int	main ()
{

	float celcius;
	
	printf("entre la temperature en celcius : ");
	scanf("%f", &celcius);
	conversion(celcius);
	
}
