#include "main.h"
/**
 * prt_char - print character
 * @arg_list: parameter to function
 * Return: number of character outputted.
*/
int prt_char(va_list arg_list)
{
    char c;

    c = va_arg(arg_list, int);
    if (c == '\0')
        return (-1);
    _putchar(c);
    return (1);
}
/**
 * prt_str - print string function
 * @arg_list: function parameter
 * Return: number of printed characters
*/
int prt_str(va_list arg_list)
{
    char * str;
    int i;

    str = va_arg(arg_list, char *);
    if (str == NULL)
        return (-1);
    for (i = 0; str[i]; i++)
        _putchar(str[i]);
    return (i);
}
/**
 * prt_percent - print percent function
 * @arg_list: unused parameter
 * Return: number of character printed
*/
int prt_percent(__attribute__((unused))va_list arg_list)
{
    _putchar('%');
    return (1);
}
int print_int(va_list arg_list)
{
    return (print_num(va_arg(arg_list, int)));
}