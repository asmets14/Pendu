#include "Pendu.h"


int main()
{
	char *motSecret;
	char copie [100];
	int maLettre;
	int vie = 10;

	printf("== Bienvenue au jeu du Pendu ==\n\n");
	*motSecret = dico;
	strcpy(copie, motSecret);
	ft_strlen(copie);// transformation de copie avec *
	printf(" %s\n\n", copie);
	

do
{	
	printf("\nChoisissez une lettre : ");
	maLettre = lireCaractere();// variable maLettre remplie
	comparaison(maLettre, motSecret, copie);
	vie = life(maLettre,motSecret, vie);
	if(vie == 0)
		break; // gestion de la vie
	if(strcmp(copie, motSecret)!= 0 )
		printf("\nIl vous reste %d vie\n", vie);
	
}while(strcmp(copie, motSecret)!= 0 );
	
	if(vie != 0)
		printf("\n\n--- Felicitation, le mot secret etait : %s ---\n", motSecret);
	else
		printf("\n\nT'es mort Mouhahahahahaha le mot etait : %s\n", motSecret);
	printf("\nMerci d'avoir joue!\n");

	return(0);
		
}
