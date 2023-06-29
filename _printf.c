#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int no_of_characters = 0;
	selector_t f_list[] = {
		{"c", prt_char},
		{"s", prt_str},
		{"%", prt_perc},
        {"b", prt_bin},
        {"d", prt_int},
		{"i", prt_int},
		{"r", prt_reversed},
		{"R", rot13},
		{"u", prt_uns_int},
		{"o", prt_oct},
		{"x", prt_hex_dec},
		{"X", prt_Hex_dec},
        {NULL, NULL}
	};
    va_list a_list;

    if (format == NULL)
        return (-1);
    /*calling parser function*/
    no_of_characters += parser(format, f_list, a_list);
    va_end(a_list);
    return (no_of_characters);
}
