#include "main.h"
#include <math.h>
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
/**
 * print_int - function to print an integer
 * @arg_list: argument
 * Return: number of characters printed
*/
int print_int(va_list arg_list)
{
    int cpy, r, j, k, count = 0;
    int n;

    n = va_arg(arg_list, int);
    /*check for negative number and strip the negative sign if true*/
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    
    /*count number of digits in number n*/
    cpy = n;
    while (1)
    {
        if (cpy == 0)
            break;
        count++;
        cpy /= 10;
    }

    k = count;
    if (n < 10)
        putchar(n + '0');
    else
    {
        for (;;)
        {
            if (count == 0)
                break;
            r = n / (pow(10, count - 1));
            putchar(r + '0');
            j = ceil(pow(10, count - 1));
            n %= j;
            count--;
        }
        putchar('\n');
    }
    return (k);
}