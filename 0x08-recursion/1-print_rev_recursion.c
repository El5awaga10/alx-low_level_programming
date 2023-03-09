#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse.
 * @s: a pointer
 * Return: return nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
	_print_rev_recursion(s - 1);
}