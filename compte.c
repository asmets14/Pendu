#include"Pendu.h"

void ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i])
	{	
		i++;	
	}
	i--;
	printf("mot secret :");
	while(i >= 0)
	{
		str[i] = '*';
		i--;
	}	
	str[i]= '\0';
}


