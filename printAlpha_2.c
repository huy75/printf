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
		s[i] = ap1[i];

	len = i - 1;
	j = len;
	for (i = 0; i <= len; i++)
	{
		s[i] = ap1[j];
		j--;
	}
	i = _puts(s);
	free(s);
	return (i);
}
/**
 * printRot13 - print a string with rot13 encryption
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
/**
 * checkPrintChar - check if printchar
 * @c : char checked
 * Return: 1 if printable, 0 if not
 */

int checkPrintChar(char c)
{
	if ((c > 0 && c < 32) || c >= 127)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * convertHexTwoChar - Convert a char into hex into the pointer s2
 * @nb: number;
 * @s2: returned char *;
 * Return: converted char with 2 char
 */
char *convertHexTwoChar(unsigned long int nb, char *s2)
{
	char *s;

	s = convert(nb, 16, 0);
	if (s[1] == '\0')
	{
		s2[0] = '0';
		s2[1] = s[0];
		s2[2] = '\0';
	}
	else
	{
		s2[0] = s[0];
		s2[1] = s[1];
		s2[2] = '\0';
	}
	return (s2);
}

/**
 * printS - print a string and replace no printable char by \x
 * @ap: va list
 * Return: Number of printed char
 */
int printS(va_list ap)
{
	char *ap1, *s, s2[2];
	int i, j;

	ap1 = va_arg(ap, char*);
	if (ap1 == NULL)
	{
		i = _puts("(null)");
		return (i);
	}
	for (i = 0; ap1[i]; i++)
	{
		if (checkPrintChar(ap1[i]) == 0)
			i = i + 4;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		_putchar('Z');
		return (0);
	}
	j = 0;
	for (i = 0; ap1[i]; i++)
	{
		if (checkPrintChar(ap1[i]) == 0)
		{
			s[j++] = '\\';
			s[j++] = 'x';
			convertHexTwoChar(ap1[i], s2);
			s[j++] = s2[0];
			s[j++] = s2[1];
		}
		else
			s[j++] = ap1[i];
	}
	i = _puts(s);
	free(s);
	return (i);
}
