#include "main.h"
/**
 * _printif - function to mimic printf function bahavior
 * @format: string containing format specifers and length modifers.
 * Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
    unsigned int printed_chars;

    selector_f f_list[] = {
        {"c", prt_char},
        {"s", prt_str},
        {"%", prt_percent},
        {"b", prt_binary},
        {"x", prt_hexa},
        {"X", prt_heXa},
        {"R", rot13},
        {"i", print_int},
        {"d", print_int},
        {NULL, NULL}
    };
    va_list arg_list;
    if (format == NULL)/*Check if format string is null*/
        return (-1);
    va_start(arg_list, format);
    /*call the parser function to do the rest*/
    printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);


}