#include "holberton.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * Return: result string
 */
char *convert(unsigned long int num, int base)
{
	static char *array;
	static char buffer[50];
	char *ptr;

	array = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = array[num % base];
		num /= base;
	} while (num);

	return (ptr);
}

/**
 * printBinary - prints binary number
 * @ap: the argument
 * Return: the number of bytes printed
 */
int printBinary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	char *str = convert(n, 2);

	return (_puts(str));
}


/**
 * printInt - prints integer
 * @ap: the argument
 * Return: the number of chars printed.
 */
int printInt(va_list ap)
{
	int n =  va_arg(ap, int);
	int cp = 0;
	int p, nb;

	p = 1;
	while (n / p >= 10 || n / p <= -10)
		p *= 10;

	while (p)
	{
		nb = n / p;
		if (nb < 0)
		{
			cp += _putchar('-');
			cp += _putchar('0' - nb);
			n = -(n - nb * p);
		}
		else
		{
			cp += _putchar('0' + nb);
			n = n - nb * p;
		}
		p /= 10;
	}
	return (cp);
}
