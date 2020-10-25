#include "holberton.h"

/**
 * _printf - prints
 * @format: the first parameter
 *
 * Return: number of printed char
 */

int _printf(const char *format, ...)
{
	char *ptr;
	int cp = 0;
	va_list ap;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (ptr = (char *)format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			cp += _putchar(*ptr);
			continue;
		}
		ptr++;
		cp += getPrint(ptr, ap);
	}
	va_end(ap);
	return (cp);
}
