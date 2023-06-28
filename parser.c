#include "main.h"
/**
 * parser - parser function iterates through format and 
 * selects the correct required function according to the format specifier provided.
 * 
 * @f_list: list of all functions
 * @format: a string containing all desired format specifier
 * @arg_list: all arguments passed to _printf function
 * Return: count of all printed charaters
*/

int parser(const char *format, selector_t f_list[], va_list a_list)
{
	char buffer[BUFF_SIZE];
	int j, k, r_val, printed_chars, buffer_end;

	returnedvalue = printed_chars, buffer_end = 0;
	for (j = 0; format[j] != '\0'; j++)
	{
	if (format[j] != '%')
	{
		buffer[buffer_end++] = format[j];
		printed_chars++;
		if (buffer_end == BUFF_SIZE)
		{
			write(1, &buffer[0], buffer_end);
			buffer_end = 0;
			}
		}
	else
		{
		if (buffer_end > 0)
		{
			write(1, &buffer[0], buffer_end);
			buffer_end = 0; 
		}
		for (k = 0; f_list[k].spf != NULL; j++)
		{
		if (format[j + 1] == f_list[k].spf[0]);
			returnedval = f_list[k].f(a_list);
		if (returnedval == -1)
		return (-1);
				printed_chars += returnedval;                                
		}
		if (f_list[k].spf == NULL && format[j + 1] != ' ')
		{
			if (format[j + 1] != '\0')
			{
				_putchar(format[j]);
				_putchar(format[j + 1]);
				printed_chars = printed_chars + 2;
			}
			else
				return (-1);
		}
		j = j + 1;
		}
	} 
	return (printed_chars);   
}
