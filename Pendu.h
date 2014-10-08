#ifndef PENDU

#define PENDU
#define TAILLE_MAX 1000

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

void ft_strlen		(char *motSecret);
char lireCaractere	();
void comparaison	(char caracetre, char *motSecret, char *copie);
int  life		(int caractere, char *motSecret, int vie);
char dico		(char *chaine);

#endif
