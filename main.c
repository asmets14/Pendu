#include "Pendu.h"


int main()
{
	char motSecret[100];
	char copie [100];
	int maLettre;
	int vie = 10;

	printf("\n\n\t\t == Bienvenu au jeu du Pendu ==\n\n");
	COULEUR("36");
	printf("Les regles sont simple : \n\t la premiere lettre inscrite est prise en compte\n\t les accents ne sont pas pris en compte\n\t les mots sont ecrits en singulier\n\n Bonne chance\n\n");
	strcpy(motSecret, dico());
	strcpy(copie, motSecret);
	ft_strlen(copie);// transformation de copie avec *

do
{
	COULEUR ("36");	
	printf("\nChoisissez une lettre : ");
	COULEUR ("0");	
	maLettre = lireCaractere();// variable maLettre remplie
	comparaison(maLettre, motSecret, copie);
	vie = life(maLettre,motSecret, vie);
	if(vie == 0)
		break; // gestion de la vie
	if(strcmp(copie, motSecret)!= 0 )
	{
		COULEUR ("36");	
		printf("\nIl vous reste %d vie", vie);
		COULEUR ("0");	
	}	
}while(strcmp(copie, motSecret)!= 0 );
	if(vie != 0)
	{
		COULEUR ("36");	
		printf("Felicitation, le mot secret etait : %s \n\n", motSecret);
		COULEUR ("36");	
	}
	else
	{
		COULEUR("31");
		printf("\n\nT'es mort Mouhahahahahaha le mot etait : %s\n", motSecret);	
		COULEUR("0");
	}
	COULEUR("36");
	printf("\n\tMerci d'avoir joue!\n\n");
	return(0);		
}
