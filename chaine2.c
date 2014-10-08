#include "Pendu.h"

//NE PAS UTILISER


char ft_strcpy(char *copie, char motSecret)
{
	int i = 0;
	int j = 0;
	
	while(motSecret[i])
	{
		copie[j] = motSecret[i];
		i++;
		j++;
	} 
	printf("%s", copie);
	return("copie");
}
