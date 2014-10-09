#include "Pendu.h"

void comparaison(char caractere, char *motSecret, char *copie)
{
	int i = 0;

	printf("\n\t");
	while(motSecret[i])
	{
		
		if(motSecret[i] == caractere)
		{
			copie[i] = caractere;
		}
		
		printf("%c", copie[i]);
		i++;
	}
}
