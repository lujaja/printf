#include "main.h"
/**
 * _putchar - write a single character to stdout
 * @c: character.
 * Return: number of printed character
*/

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
