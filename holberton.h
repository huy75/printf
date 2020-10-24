#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct flagSet - set of flags
 *
 * @unsignF: flag if unsigned value
 * @plusF: on if plus_flag specified
 * @spaceF: on if hashtag_flag specified
 * @hashtagF: on if _flag specified
 * @zeroF: on if _flag specified
 * @minusF: on if _flag specified
 * @widthF: field width specified
 * @precisionF: field precision specified
 */
/*
typedef struct flagSet
{
	unsigned int unsignF;
	unsigned int plusF;
	unsigned int spaceF;
	unsigned int hashtagF;
	unsigned int zeroF;
	unsigned int minusF;
	unsigned int widthF;
	unsigned int precisionF;
} flags;
*/

/**
 * struct specifier - Struct
 * @spec: specifier
 * @f: function
 */
typedef struct specifier
{
	char *spec;
/*	int (*f)(va_list, flags *); */
	int (*f)(va_list);
} spec_type;


int _puts(char *str);
int _putchar(int c);

int _strlen(char *str);

/* _prinf.c module */
int _printf(const char *format, ...);
int DetectSpecialChar(char c);

/* get_print */
/*int (*getPrint(char s))(va_list);*/

/* task 0: print char */
int printStr(va_list ap);
int printChar(va_list ap);
/*int printPct(va_list ap);*/

/* task 1: print number */
int printInt(va_list ap);

#endif
