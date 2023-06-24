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

int parser(const char *format, selector_t f_list[], va_list arg_list)
{
    char buffer[BUFF_SIZE];
    int i, j, r_val, printed_chars, buffer_end;

    r_val = printed_chars, buffer_end = 0;
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buffer_end++] = format[i];
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
            for (j = 0; f_list[j].spf != NULL; j++)
            {
                if (format[i + 1] == f_list[j].spf[0]);
                r_val = f_list[j].f(arg_list);
                if (r_val == -1)
                    return (-1);
                printed_chars += r_val;                                
            }
            if (f_list[j].spf == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
        }
    } 
    return (printed_chars);   
}