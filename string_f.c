#include "main.h"
/**
 * rot13 - function to print the R format specifier
 * @a_list: argument
 * Return: number of characters printed
*/
int rot13(va_list arg_list)
{
    char *str;
    int i;

    str = va_arg(arg_list, char *);
    if (str == NULL)
        return (-1);
   for (i = 0;str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            putchar(str[i] + 13);
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            putchar(str[i] - 13);
        else
            putchar(str[i]);
    }
    return (i);
}