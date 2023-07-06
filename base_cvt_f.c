#include "main.h"
/**
 * prt_binary - print binary
 * @arg_list: function parameter
 * Return: number of characters printed
*/
int prt_binary(va_list arg_list)
{
    char *str, temp;
    int i, len, num;

    num = va_arg(arg_list, unsigned int);
    len = base_len(num, BINARY);
    if (len == 0)
        len = 1;
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (-1);
    if (num == 0)
        _putchar('0');
    else
    {
        for (i = 0; num > 0;i++)
        {
            if (num % BINARY == 0)
                str[i] = '0';
            else
                str[i] = '1';
            num /= BINARY;
        }
        for (i = len - 1; i >= 0; i--)
        _putchar(str[i]);
    }
    free(str);
    return (len);
    
}
/**
 * prt_hex - print hexadecimal
 * @arg_list: function parameter
 * Return: number of characters printed
*/
int prt_hexa(va_list arg_list)
{
    char *str;
    int i, len, num, rem_num;

    num = va_arg(arg_list, unsigned int);
    if (num == 0)
        return (_putchar('0'));
    len = base_len(num, HEXADECIMAL);
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (-1);
    for (i = 0; num > 0; i++)
    {
        rem_num = num % HEXADECIMAL;
        if (rem_num > 9)
        {
            rem_num = hex_check(rem_num, 'x');
            str[i] = rem_num;
        }
        else
        {
            str[i] = rem_num + '0';
        }
        num /= HEXADECIMAL;
    }
    for (i = (len - 1); i >= 0; i--)
        _putchar(str[i]);
    return (i);
}
/**
 * prt_hex - print hexadecimal
 * @arg_list: function parameter
 * Return: number of characters printed
*/
int prt_heXa(va_list arg_list)
{
    char *str;
    int i, len, num, rem_num;

    num = va_arg(arg_list, unsigned int);
    if (num == 0)
        return (_putchar('0'));
    len = base_len(num, HEXADECIMAL);
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (-1);
    for (i = 0; num > 0; i++)
    {
        rem_num = num % HEXADECIMAL;
        if (rem_num > 9)
        {
            rem_num = hex_check(rem_num, 'X');
            str[i] = rem_num;
        }
        else
        {
            str[i] = rem_num + '0';
        }
        num /= HEXADECIMAL;
    }
    for (i = (len - 1); i >= 0; i--)
        _putchar(str[i]);
    return (i);
}
