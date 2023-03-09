#include "main.h"

/**
 * _puts_recursion- prints a string
 * @s: a pointer
 * Return: return nothing
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (i == '\0')
		return;
	while (i != '\0')
	{
		_putchar(s[i] + _puts_recursion(i + 1));
		i++;
	}
}
