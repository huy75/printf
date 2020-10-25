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
int getPrint(char *s, va_list);

/* task 0: printAlpha.c module */
int printStr(va_list ap);
int printChar(va_list ap);

/* task 1: printNum.c module */
int printInt(va_list ap);

#endif
