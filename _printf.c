#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	selector_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
        {NULL, NULL}
	};
    va_list arg_list;

    if (format == NULL)
        return (-1);
    /*calling parser function*/
    printed_chars += parser(format, f_list, arg_list);
    va_end(arg_list);
    return (printed_chars);
}
