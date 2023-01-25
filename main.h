#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format_specifier - Struct op
 *
 * @fs: the format specifier
 * @f: the function associated to fs
 */
struct format_specifier
{
	char *fs;
	int (*f)(va_list);
};

typedef struct format_specifier fs_t;

int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
#endif
