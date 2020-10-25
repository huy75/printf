#include "holberton.h"

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
