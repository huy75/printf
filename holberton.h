#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUF_SIZE 1024
#define BUF_FLUSH -1

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
int printUnsigned(va_list ap);
char *convert(unsigned long int num, int base, int lowercase);

/* printBases.c module */
int printBinary(va_list ap);
int printHexL(va_list ap);
int printHexU(va_list ap);
int printOctal(va_list);

/* printAlpha2.c module */
int printReverse(va_list ap);
int printRot13(va_list ap);
int printS(va_list ap);

#endif
