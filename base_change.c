#include "main.h"

/**
 * print_binary - function to print convert decimal to binary.
 * 
 * @arg_list: argument
 * Return: number of printed characters
*/

int prt_bin(va_list a_list)
{
    char *str;
    int i, j, len, num, count;
    
    i = 0;
    len = baselength(num,2);
    num = va_arg(a_list, int);
    
    if (num == 0)
    {
        _putchar('0');
        count++;
    } 
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (-1);
    while (num > 0)
    {
        if (num % 2 == 0)
            str[i] = '0';
        else
            str[i] = '1';
        num /= 2;
        count++;
        i++; 
    }
    for (j = i -1; j >= 0; j--)
    {
        _putchar(str[j]);
    }
    free(str);
    return (count);
}
/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int prt_hex_dec(va_list a_list)
{
    char *hex_num;
    char *hex_rep;
    int i, len, rem_num, count;
    unsigned int num;

    num = va_arg(a_list, unsigned int );

    len = baselength(num, 16);
    count = 0;
    i = len;
        
    hex_num = (char *) malloc(sizeof(char) * (len + 1));
    if (hex_num == NULL)
        return (-1);
    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    if (num < 0)
        return (-1);
    for (i = 0; num > 0; i++)
    {
        rem_num = num % 16;
        if (rem_num > 9)
        {
            rem_num = hex_check(rem_num, 'x');
            hex_num[i] = rem_num;
        }
        else
        {
            hex_num[i] = rem_num + '0';
        }
        num /= 16;
    }
    hex_num[i] = '\0';
    for (i = len - 1; i >= 0; i--)
    {
        write(1, &hex_num[i], 1);
        count++;
    }
    free(hex_num);
    return (count);
}
/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int prt_Hex_dec(va_list a_list)
{
    char *hex_num;
    char *hex_rep;
    int i, len, rem_num, count;
    unsigned int num;

    num = va_arg(a_list, unsigned int );

    len = baselength(num, 16);
    count = 0;
    i = len;
        
    hex_num = (char *) malloc(sizeof(char) * (len + 1));
    if (hex_num == NULL)
        return (-1);
    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    if (num < 0)
        return (-1);
    for (i = 0; num > 0; i++)
    {
        rem_num = num % 16;
        if (rem_num > 9)
        {
            rem_num = hex_check(rem_num, 'X');
            hex_num[i] = rem_num;
        }
        else
        {
            hex_num[i] = rem_num + '0';
        }
        num /= 16;
    }
    hex_num[i] = '\0';
    for (i = len - 1; i >= 0; i--)
    {
        write(1, &hex_num[i], 1);
        count++;
    }
    free(hex_num);
    return (count);
}