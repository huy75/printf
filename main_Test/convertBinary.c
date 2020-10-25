#include <stdio.h>
#include <stdlib.h>

char *Converter(int nb, int base)
{
	char *convertTab;
	char *buffer;
	int lenbuffer = 0;
	int nbT;
	int i;

	convertTab = malloc(sizeof(char) * (15 + 1));
	convertTab = "0123456789ABCDEF";
	
	nbT = nb;
	while (nbT != 0)
	{
		nbT = nbT / base;
		lenbuffer++;
	}
	buffer = malloc(sizeof(char) * (lenbuffer + 1));

	i = 0;
	buffer[lenbuffer--] = '\0';
	while (nb != 0)
	{
		buffer[lenbuffer] = convertTab[nb % base];
		lenbuffer--;
		nb = nb / base;
	}
/*	free(convertTab); don't work why?*/
	return (buffer);
}

int main(void)
{
	char *s;

	s = Converter(118,16);
	
	printf("%s", s);
	free (s);
	//ConvertOctale(77);
}
