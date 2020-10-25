#include "holberton.h"

/**
 * printInt - prints integer
 * @ap: the argument
 * Return: 0.
 */
int printInt(va_list ap)
{
	int n =  va_arg(ap, int);
	int p, nb;

	p = 1;
	while (n / p >= 10 || n / p <= -10)
		p *= 10;

	while (p)
	{
		nb = n / p;
		if (nb < 0)
		{
			_putchar('-');
			_putchar('0' - nb);
			n = -(n - nb * p);
		}
		else
		{
			_putchar('0' + nb);
			n = n - nb * p;
		}
		p /= 10;
	}
	return (0);
}
