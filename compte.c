#include"Pendu.h"

void ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\n')
	{	
		str[i] = '*';
		i++;
	}
	COULEUR("36");	
	printf("mot secret : %s\n", str);
	COULEUR("0");
}


