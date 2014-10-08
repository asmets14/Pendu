#include"Pendu.h"

int life(int caractere, char *motSecret, int vie)
{
	char *chaine = NULL;

	chaine = strchr(motSecret, caractere);
	if(chaine == NULL)
	{
		vie = vie - 1;
	}
	return(vie);
}
