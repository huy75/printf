#include "holberton.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 *
 * Return: 0 nothing to return.
 */
int _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
