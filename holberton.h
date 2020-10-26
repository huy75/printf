#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUF_SIZE 1024
#define BUF_FLUSH -1
#define HEX "0x"
#define FLAGS_INIT {0, 0, 0, 0, 0}

/**
 * struct flags - flags on / off
 * when used with a printf command
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */
typedef struct flags
{
	unsigned int plus_flag;
	unsigned int space_flag;
	unsigned int hashtag_flag;
	unsigned int h_modifier;
        unsigned int l_modifier;
} flags_t;


/**
 * struct specifier - Struct
 * @spec: specifier
 * @f: pointer to the function
 */
typedef struct specifier
{
	char *spec;
	int (*f)(va_list ap, flags_t *f);
} specType;


int _puts(char *str);
int _putchar(int c);

/* _prinf.c module */
int _printf(const char *format, ...);

/* get_print.c module */
int getPrint(const char *s, va_list, flags_t *f);

/* printAlpha.c module */
int printStr(va_list ap, flags_t *f);
int printChar(va_list ap, flags_t *f);
int printModulo(va_list ap, flags_t *f);

/* printNum.c module */
int printInt(va_list ap, flags_t *f);
int printUnsigned(va_list ap, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);

/* printBases.c module */
int printBinary(va_list ap, flags_t *f);
int printHexL(va_list ap, flags_t *f);
int printHexU(va_list ap, flags_t *f);
int printOctal(va_list ap, flags_t *f);
int printAddr(va_list ap, flags_t *f);

/* printAlpha2.c module */
int printReverse(va_list ap, flags_t *f);
int printRot13(va_list ap, flags_t *f);
int printS(va_list ap, flags_t *f);

#endif
