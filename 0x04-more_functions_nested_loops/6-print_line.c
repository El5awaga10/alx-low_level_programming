#include "main.h"

/**
 * print_line- draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
