#include "holberton.h"

/**
 * printChar - prints for c flag
 * @arg: va_list name
 * Return:  Character
 */
int printChar(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * printInt - prints an integer
 * @ap: va_list of arguments from _printf
 * Return: number of char printed
 */
int printInt(va_list ap)
{
}
