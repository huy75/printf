#include "holberton.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 *
 * Return: nothing to return.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
