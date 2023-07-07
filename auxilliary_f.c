#include "main.h"
/**
 * _putchar - function to write a single character
 * to stdout.
 * @c: character to output
 * Return: number of character outputted.
*/
int _putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
/**
 * base_len - check length function
 * @num: parameter
 * @base: base to convert to
 * Return: length of integer to be coverted
*/
int base_len(unsigned int num, int base)
{
    int i;

    for (i = 0; num > 0; i++)
        num /= base;
    return (i);
}
/**
 * hex_check - checks for corresponding hex value
 * @num: function parameter
 * @x: function parameter
*/
int hex_check( unsigned int num, char x)
{
    char *hex = "abcdef";
    char *heX = "ABCDEF";

    num -= 10;
    if (x == 'x')
        return (hex[num]);
    return (heX[num]);
}
int print_num(long int num)
{
    int c = 0;

    if (num < 0)
    {
        _putchar('-');
        c++;
        num = num * -1;
    }
    if (num == 0)
    {
        _putchar('0');
        c++;
    }
    if (num / 10)
        print_num(num / 10);
    _putchar((num % 10) + '0');
    c++;
    return(c);
    
}