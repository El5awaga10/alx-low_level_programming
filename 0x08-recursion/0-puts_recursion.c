#include "main.h"

/**
 * _puts_recursion- prints a string
 * @s: a pointer
 * Return: return nothing
 */

void _puts_recursion(char *s)
{
	char c;
	int i;

	c = '0';
	i = 0;
	if (c == '\0')
		return;
	while (i != '\0')
	{
		_putchar(s[i] + _puts_recursion(c + 1));
		i++;
	}
}
