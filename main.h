#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * Macros definition
*/
#define BUFF_SIZE 1024


/**
 * struct selector - Define a structure for specifier and function associeted pointer.
 * @spf: specifier for a given literal.
 * @f: pointer to function associeted
*/
struct selector
{
	char *spf;
	int (*f)(va_list);
};
typedef struct selector selector_t;


/**
 * main functions declaration
*/
int _printf(const char *format, ...);
int parser(const char *format, selector_t f_list[], va_list arg_list);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif 
