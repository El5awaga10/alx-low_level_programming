#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal.
 * @n: parameter
 * Return: return nothing
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
