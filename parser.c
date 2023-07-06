#include "main.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the format & length modifier characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, selector_f f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[j].spf != NULL; j++)
			{
				if (format[i + 1] == f_list[j].spf[0])/**loop through function list to acquire needed function */
				{
					r_val = f_list[j].f_p(arg_list);/*use the selected function to print according to format specifier*/
					if (r_val == -1)/*check if the function operation of was succcess*/
						return (-1);
					printed_chars += r_val;/*keep count of printed characters*/
					break;/*feel free to comment if you dont understand*/
				}
			}
			if (f_list[j].spf == NULL && format[i + 1] != ' ')/*check if the function was not found*/
			{
				if (format[i + 1] != '\0')/*print the specifier character and continue*/
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}