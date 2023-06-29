#include "main.h"
/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, selector_t f_list[], va_list a_list)
{
	char buffer[BUFF_SIZE];
	int j, k, returnedvalue, no_of_characters, buffer_end;

	no_of_characters = 0;
	buffer_end = 0;
	for (j = 0; format[j] != '\0'; j++)/* Iterates through the main str*/
	{
		if (format[j] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (k = 0; f_list[k].spf != NULL; k++)
			{
				if (format[j + 1] == f_list[k].spf[0])
				{
					returnedvalue = f_list[j].f(a_list);
					if (returnedvalue == -1)
						return (-1);
					no_of_characters += returnedvalue;
					break;
				}
			}
			if (f_list[k].spf == NULL && format[j + 1] != ' ')
			{
				if (format[j + 1] != '\0')
				{
					_putchar(format[j]);
					_putchar(format[j + 1]);
					no_of_characters += 2;
				}
				else
					return (-1);
			}
			j += 1; /*Updating i to skip format symbols*/
		}
		else
		{
			buffer[buffer_end++] = format[j];
			if (buffer_end == BUFF_SIZE)
			{
				write(1, &buffer[0], buffer_end);
				buffer_end = 0;
			}
			no_of_characters++;
		}
		{
			write(1, &buffer[0], buffer_end);
			buffer_end = 0;
		}
	}
	return (no_of_characters);
}