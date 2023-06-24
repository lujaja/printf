#include "main.h"

/**
 * print_char - function a single character.
 * 
 * @arg_list: function argument.
 * Return: number of printed characters.
 * 
*/
int print_char(va_list arg_list)
{
    char c;
    
    if (arg_list == NULL)
        return (-1);
    c = va_arg(arg_list, int);
    write(1, &c, 1);
    return (1);
}
/**
 * print_string - print string function.
 * 
 * @arg_list: parameter.
 * Return: number of printed characters.
*/
int print_string(va_list arg_list)
{
    char * str;
    int i;

    str = va_arg(arg_list, char *);
    if (!str)
        return (-1);
    for ( i = 0; str[i]; i++)
    {
        _write_char(str[i]);
    }
    return (i);
}
/**
 * print_percent - print percent function.
 * 
 * @arg_list: parameter.
 * Return: number of printed characters.
*/
int print_percent(va_list arg_list)
{
    char c;

    if (arg_list == NULL)
        return (-1);
    c = va_arg(arg_list, int);
    _write_char(c);
    return (1);
}