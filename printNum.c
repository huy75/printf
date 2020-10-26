#include "holberton.h"

/**
 * printUnsigned - prints an unsigned integer
 * @ap: va_list of arguments from _printf
 * Return: number of char printed
 */
int printUnsigned(va_list ap)
{
	int i;
	unsigned long int u = va_arg(ap, unsigned long int);
	char *str;

	if (u == 0)
		return(_putchar('0'));

	str = convert(u, 10);
	i = _puts(str);
	free(str);
	return (i);
}

/**
 * convert - converts number and base into string
 * @nb: input number
 * @base: input base
 * Return: result string
 */

char *convert(unsigned long int nb, int base)
{
	char convertTab[] = "0123456789ABCDEF";
	char *buffer;
	int lenbuffer = 0;
	unsigned long int nbT;

	nbT = nb;

	while (nbT != 0)
	{
		nbT = nbT / base;
		lenbuffer++;
	}
	buffer = malloc(sizeof(char) * (lenbuffer + 1));
	if (buffer == NULL)
	{
		_putchar('F');
		return (NULL);
	}
	buffer[lenbuffer--] = '\0';
	while (nb != 0)
	{
		buffer[lenbuffer] = convertTab[nb % base];
		lenbuffer--;
		nb = nb / base;
	}
	return (buffer);
}

/**
 * printBinary - prints binary number
 * @ap: the argument
 * Return: the number of bytes printed
 */
int printBinary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str;
	int i;

	str = convert(n, 2);
	i = _puts(str);
	free(str);
	return (i);
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
