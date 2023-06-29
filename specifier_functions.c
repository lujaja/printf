#include "main.h"

/**
 * print_char - function a single character.
 * 
 * @arg_list: function argument.
 * Return: number of printed characters.
 * 
*/
int prt_char(va_list a_list)
{
    char c;
    
    c = va_arg(a_list, int);
    _putchar(c);
    return (1);    
}
/**
 * print_string - print string function.
 * 
 * @arg_list: parameter.
 * Return: number of printed characters.
*/
int print_str(va_list a_list)
{
    char * str;
    int i;

    str = (char *)va_arg(a_list, char *);
    if (str == NULL)
        return (-1);
    for ( i = 0; str[i]; i++)
    {
        _putchar(str[i]);
    }
    return (i);
}
/**
 * print_percent - print percent function.
 * 
 * @arg_list: parameter.
 * Return: number of printed characters.
*/
int prt_percent(__attribute__((unused))va_list a_list)
{
    _putchar('%');
    return (1);
}