#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int DetectSpecialChar(char c)
{
/*               %          '         \ work only with \\ in _printf*/
	if (c == 37)
		return (1);
	else
		return (0);
}
void _printc(va_list va)
{
	int c;
	
	c = va_arg(va, int);
	_putchar(c);
}

void _printstr(va_list va)
{
	int i;
	char *s;

	s = va_arg(va, char *);

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
}

typedef struct _format
{
	char type;
	void (*fuprint)(va_list);
} _format;

//void _printf(char *s,int nbmax, ...)
/*return le nombre de charactere */
void _printf1(char *s, ...)
{
	int i;
	int j;
	va_list va;
	_format st[] = {
		{'c', _printc},
		{'s', _printstr},
		{'\0', NULL}
	};

	va_start(va, s);

	/*lecture de chaques char de s */
	for (i = 0; s[i]; i++)
	{
		if (DetectSpecialChar(s[i]) == 1)
		{
			i++;
			for (j = 0; st[j].type != '\0'; j++)
			{
			//	_putchar(j + '0');
			//	_putchar('\n');
				if (s[i] == st[j].type)
				{
					st[j].fuprint(va);
				}
			}
		}
		else
		{
			_putchar(s[i]);
		}

	}
	_putchar('\n');
	va_end(va);
}

int main()
{
	_printf1("test string: %s %s\n", "test", "test1");
	return (0);
}
