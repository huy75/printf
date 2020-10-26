#include "holberton.h"

/**
 * printReverse - print a reverse string
 * @ap: va list to  initialise a char *s
 * Return: Number of printed char
 */
int printReverse(va_list ap)
{
	char *s;
	char *ap1;
	char tps;
	int i;
	int j;
	int len;

	ap1 = va_arg(ap, char *);
	if (ap1 == NULL)
	{
		i = _puts("(null)");
		return (i);
	}

	for (i = 0; ap1[i]; i++)
	;
	len = i;

	s = malloc((sizeof(char)) * len);
	for (i = 0; ap1[i]; i++)
	{
		s[i] = ap1[i];
	}

	len = i - 1;
	j = len;
	for (i = 0; i != (len / 2); i++)
	{
		tps = s[j];
		s[j] = s[i];
		s[i] = tps;
		j--;
	}
	i = _puts(s);
	free(s);
	return (i);
}
/**
 * printRot13 - print a reverse string
 * @ap: va list to  initialise a char *s
 * Return: Number of printed char
 */

int printRot13(va_list ap)
{
	char *tb1 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *tb2 = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	char *s;
	char *ap1;
	int i, j, bl;
	int len;

	ap1 = va_arg(ap, char *);
	if (ap1 == NULL)
	{
		i = _puts("(null)");
		return (i);
	}
	for (i = 0; ap1[i]; i++)
	;
	len = i;
	s = malloc((sizeof(char)) * len);
	if (s == NULL)
	{
		_putchar('Z');
		return (0);
	}
	for (i = 0; ap1[i]; i++)
		s[i] = ap1[i];
	s[i] = '\0';
	for (i = 0; s[i]; i++)
	{
		bl = 0;
		for (j = 0; tb1[j] && (bl == 0); j++)
		{
			if (tb1[j] == s[i])
			{
				s[i] = tb2[j];
				bl = 1;
			}
		}
	}
	i = _puts(s);
	free(s);
	return (i);
}
