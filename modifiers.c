#include "main.h"
/**
 * get_size - function to check for int size modifier.
 * @format: argument
 * Return: size according to obtained length modifer
*/
int get_size(char * format)
{
    int i, size;

    size = 0;

    for ( i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == 'l')
            size = S_LONG;
        else if (format[i] == 'h')
            size = S_SHORT;
        else 
            size = 0;
    }
    return (size);
}
