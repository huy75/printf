#include "holberton.h"

/**
 * printChar - prints character
 * @ap: the argument
 * Return: number of chars printed.
 */
int printChar(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * printStr - prints string
 * @ap: the argument
 * Return: numbers of chars printed.
 */
int printStr(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	return _puts(str);

}

/**
 * printModulo - printModulo
 * @ap : the argument
 * Return: number of char
 */

int printModulo()
{
	return (_putchar('%'));
}
