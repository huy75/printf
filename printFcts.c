#include "holberton.h"

/**
 * printChar - print a char
 * @va: valist for argument
 * Return: number of printed element
 */

int printChar(va_list va) 
{
	int c;
	int cp = 0;

	c = va_arg(va, int);
	_putchar(c);
	cp++;
	return (cp);
}

/**
 * printStr - print a string
 * @va: valist for argument
 * Return: number of printed element
 */

int printStr(va_list va)
{
	int i;
	char *s;
	int cp = 0;

	s = va_arg(va, char *);

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		cp++;
	}   
	return (cp);
}

/**
 * printInt - print an int
 * @va: valist for argument
 * Return: number of printed element
 */

int printInt(va_list va) 
{
	int nb; 
	int nbt;
	int nbcar;
	int *tb;
	int cp; 
	int i;

	cp = 0;
	nb = va_arg(va, int);
	nbt = nb; 
	nbcar = 0;
	while ((nbt / 10 != 0))
	{
		nbt /= 10;
		nbcar++;
	}
	tb = malloc(sizeof(int) * nbcar);
	for (i = nbcar; i >= 0; i--)
	{
		tb[i] = nb % 10;
		nb /= 10;
	}
	for (i = 0; i <= nbcar; i++)
	{
		putchar(tb[i] + '0');
		cp++;
	}

	free(tb);
	return (cp);
}
