#include"Pendu.h"

char dico(char *chaine)
{
	FILE* fichier = NULL;
	int nbrLigne = 0;
	int nbr = 0;
	int position = 0;
	

	fichier = fopen("dico.txt", "r");

	if (fichier != NULL)
    	{
        	while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        	{
        		    nbrLigne++;
       		}
		nbrLigne--;
	 }
srand(time(NULL));
nbr = (rand() % (nbrLigne - 0 + 1)); //generation nbr aleatoire
nbrLigne = 0;
nbr = nbr - 1;
fseek(fichier, 0, SEEK_SET);
while(nbrLigne != nbr)
{
	fgets(chaine, TAILLE_MAX, fichier);
	nbrLigne++;
}
position = ftell(fichier);
fgets(chaine, TAILLE_MAX, fichier);
fclose(fichier);
  
    return *chaine;
} 
