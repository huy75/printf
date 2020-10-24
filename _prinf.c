#include "holberton.h"
/**
 * DetectSpecialChar - Detect a special character
 * @c: the special character
 * Return: 1 if detected 0 if not
 */


int DetectSpecialChar(char c)
{
/*               %          '         \ work only with \\ in _printf*/
	if (c == 37)
		return (1);
	else
		return (0);
}

/**
 * _printf - print a string, if a special char is detected, print the corresponding variable depending of his type
 * @s: The main string
 * *.: variable to print
 * Return: number of printed char
 */

int _printf(const char *s, ...)
{
	int i;
	int j;
	int cp;
	va_list va;
	spec_type st[] = {
		{"c", printChar},
		{"s", printStr},
		{"i", printInt},
		{"d", printInt},
		{NULL, NULL}
	};

	va_start(va, s);
	cp = 0;

	/*lecture de chaques char de s */
	for (i = 0; s[i]; i++)
	{
		if (DetectSpecialChar(s[i]) == 1)
		{
			i++;
			cp++;
			for (j = 0; st[j].spec != '\0'; j++)
			{
				if (s[i] == *st[j].spec)
				{
					cp += st[j].f(va);
				}
			}
		}
		else
		{
			_putchar(s[i]);
		}
		cp++;
	}
	va_end(va);
	return (cp);
}
