#include "Pendu.h"

char lireCaractere()
{
    char caractere = 0;
  
    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà
  
    // On lit les autres caractères mémorisés un à un jusqu'à l'\n (pour les effacer)
    while (getchar() != '\n') ;
  
    return caractere; // On retourne le premier caractère qu'on a lu
  
}

