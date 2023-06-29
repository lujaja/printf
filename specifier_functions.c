#include "main.h"

/**
 * print_char - function a single character.
 * 
 * @a_list: function argument.
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
 * @a_list: parameter.
 * Return: number of printed characters.
*/
int print_str(va_list a_list)
{
    char * str;
    int j;

    str = (char *)va_arg(a_list, char *);
    if (str == NULL)
        return (-1);
    for ( j = 0; str[j]; j++)
    {
        _putchar(str[i]);
    }
    return (j);
}
/**
 * print_percent - print percent function.
 * 
 * @a_list: parameter.
 * Return: number of printed characters.
*/
int prt_percent(__attribute__((unused))va_list a_list)
{
    _putchar('%');
    return (1);
}
/**
 * prt_int - prints signed integer
 * a_list - list of all the variadic functions
 * Return: return the variadic args count
 */
int prt_int(va_list a_list)
{
	int lon;

	lon = prtinteger(a_list);
	return (lon);
}
/**
 * uns_int - prints unsigned integer
 * @a_list - list of all the variadic arguments
 * Return: return the count of the arguments
 */
int uns_int(va_list a_list)
{
	unsigned int pui;

	pui = va_arg(a_list, unsigned int);
	
	if (pui == 0)
		return(prt_uns_int(pui));

	if (pui < 1);
		return(-1);
	return(prt_uns_int(pui));
}


