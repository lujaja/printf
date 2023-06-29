#include "main.h"

/**
 * rot13 - function to print the R format specifier
 * @a_list: argument
 * Return: number of characters printed
*/
int rot13(va_list a_list)
{
    char *str;
    int i;

    str = va_arg(a_list, char *);
    if (str == NULL)
        return (-1);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'M')
            putchar((str[i] + 13));/*rottate 13 times a head*/
        else if (str[i] >= 'N' && str[i] <= 'Z')
            putchar((str[i] - 13));/*rottate 13 times a back*/
        if (str[i] >= 'a' && str[i] <= 'm')
            putchar((str[i] + 13));/*rottate 13 times a head*/
        else if (str[i] >= 'n' && str[i] <= 'z')
            putchar((str[i] - 13));/*rottate 13 times a back*/
        else if (!(str[i] >= 'A' && str[i] <= 'Z' || \
        str[i] >= 'a' && str[i] <= 'z'))
            putchar(str[i]);
    }
    return (i);
}
