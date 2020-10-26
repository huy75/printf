#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct specifier - Struct
 * @spec: specifier
 * @f: function
 */
typedef struct specifier
{
	char *spec;
	int (*f)(va_list);
} specType;


int _puts(char *str);
int _putchar(int c);

/* _prinf.c module */
int _printf(const char *format, ...);

/* get_print.c module */
int getPrint(const char *s, va_list);

/* printAlpha.c module */
int printStr(va_list ap);
int printChar(va_list ap);
int printModulo(va_list ap);

/* printNum.c module */
int printInt(va_list ap);
int printBinary(va_list ap);
int printUnsigned(va_list ap);

char *convert(unsigned long int num, int base);

#endif
