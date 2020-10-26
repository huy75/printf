#include "holberton.h"

/**
 * printHexL - prints a number in hexadecimal base,
 * in lowercase
 * @ap: va_list arguments from _printf
 * Return: number of char printed
 */
int printHexL(va_list ap)
{
	char *str;
	int i;
	unsigned int num = va_arg(ap, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	str = convert(num, 16, 1);
	if (str == NULL)
		return (0);
	i = _puts(str);
	free(str);
	return (i);
}

/**
 * printHexU - prints a number in hexadecimal base,
 * in uppercase
 * @ap: va_list arguments from _printf
 * Return: number of char printed
 */
int printHexU(va_list ap)
{
	char *str;
	int i;
	unsigned int num = va_arg(ap, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	str = convert(num, 16, 0);
	if (str == NULL)
                return (0);
	i = _puts(str);
	free(str);
	return (i);
}

/**
 * printOctal - prints a number in base 8
 * @ap: va_list arguments from _printf
 * Return: number of char printed
 */
int printOctal(va_list ap)
{
	char *str;
	int i;
	unsigned int num = va_arg(ap, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	str = convert(num, 8, 0);
	if (str == NULL)
                return (0);
	i = _puts(str);
	free(str);
	return (i);
}

/**
 * printBinary - prints binary number
 * @ap: the argument
 * Return: the number of bytes printed
 */
int printBinary(va_list ap)
{
	char *str;
	int i;
	unsigned int num = va_arg(ap, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	str = convert(num, 2, 0);
	if (str == NULL)
		return (0);
	i = _puts(str);
	free(str);
	return (i);
}
