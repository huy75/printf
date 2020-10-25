#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */

int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 *
 * Return: number of chars printed.
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (str - a);
}
