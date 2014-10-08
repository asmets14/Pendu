#include"Pendu.h"

void ft_strlen(char *str)
{
	int i = 0;

	printf("a partir du compte %s", str);

	while(str[i] != '\n')
	{	
		str[i] = '*';
		i++;
	}
	printf("STR %d\n", i);

	printf("mot secret : %s\n", str);
}


