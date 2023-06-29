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
#define S_LONG 2
#define S_SHORT 1


/**
 * struct selector - Define a structure for specifier and function associeted pointer.
 * 
 * @spf: specifier for a given literal.
 * @f: pointer to function associeted
*/
struct selector
{
    char * spf;
    int (*f)(va_list);
};
typedef struct selector selector_t;


/**
 * main functions declaration
*/
int _printf(const char *format, ...);
int parser(const char *format, selector_t f_list[], va_list a_list);
int _putchar(char);
int prt_char(va_list a_list);
int prt_str(va_list a_list);
int prt_perc(va_list a_list);
int prt_bin(va_list a_list);
int rot13(va_list a_list);
int prt_uns_int(va_list a_list);
int prt_oct(va_list a_list);
int prt_hex_dec(va_list a_list);
int prt_Hex_dec(va_list a_list);
int prt_int(va_list a_list);
int prt_num(va_list a_list);
int prt_reversed(va_list a_lislt);
/**
 * auxilliary functions
*/
unsigned int baselength(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
int hex_check(int num, char x);


#endif 
