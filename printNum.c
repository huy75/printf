#include "holberton.h"

/**
 * printUnsigned - prints an unsigned integer
 * @ap: va_list of arguments from _printf
 * Return: number of char printed
 */
int printUnsigned(va_list ap, flags_t *f)
{
	char *str;
	int i;
	unsigned long int num = va_arg(ap, unsigned long int);

	(void)f;
	if (num == 0)
		return (_putchar('0'));

	str = convert(num, 10, 0);
	if (str == NULL)
		return (0);

	i = _puts(str);
	free(str);
	return (i);
}

/**
 * convert - converts number and base into string
 * @nb: input number
 * @base: input base
 * @lower: set to 1 only if called by printHexL
 * Return: result string
 */

char *convert(unsigned long int nb, int base, int lower)
{
	char *convertTab;
	char *buffer;
	int lenbuffer = 0;
	unsigned long int nbT;

	convertTab = (lower) ? "0123456789abcdef" : "0123456789ABCDEF";

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
 * printInt - prints integer
 * @ap: the argument
 * Return: the number of chars printed.
 */
int printInt(va_list ap, flags_t *f)
{
	int n =  va_arg(ap, int);
	int cp = 0;
	int p, nb;

	(void)f;
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
