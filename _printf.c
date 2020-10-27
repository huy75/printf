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

	flags_t fgs = FLAGS_INIT;
	int cp = 0;
	va_list ap;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (ptr = (char *)format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			cp += getPrint(ptr, ap, &fgs);
		}
		else
			cp += _putchar(*ptr);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (cp);
}
