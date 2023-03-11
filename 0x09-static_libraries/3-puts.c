#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * @str: type of string
 * Return: return nothing
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
