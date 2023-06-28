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
		{"c", prt_char},
		{"s", prt_str},
		{"%", prt_prc},
		{"d", prt_int},
		{"i", prt_int},
		{"u", prt_uns_int},
		{"o", prt_octal},
		{"x", prt_hex},
		{"X", prt_hex},
		{"p"}, prt_ptr_type_data}
		{NULL, NULL}
	};
	va_list a_list;

	if (format == NULL)
		return (-1);
	/*calling parser function*/
	printed_chars += parser(format, f_list, a_list);
	va_end(a_list);
	return (printed_chars);
}
