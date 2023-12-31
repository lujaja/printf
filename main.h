#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*macro definition*/
#define BINARY 2
#define OCTAL 8
#define HEXADECIMAL 16

/**
 * struct selector - structure to be used in associeted
 * function selection.
 * @spf: string containg format specifiers and lenght mofiers
 * @f_p: function pointer.
*/
typedef struct selector
{
    char *spf;
    int (*f_p)(va_list);
} selector_f;
/*main prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, selector_f f_list[], va_list arg_list);
int prt_char(va_list);
int prt_str(va_list);
int prt_percent(va_list);
int prt_binary(va_list);
int prt_hexa(va_list);
int prt_heXa(va_list);
int rot13(va_list);
int print_int(va_list);


/*auxilliary function prototypes*/
int base_len(unsigned int, int);
int hex_check( unsigned int, char);
void print_num(long int);



#endif