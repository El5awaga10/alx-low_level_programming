#include "main.h"

/**
 * *_strchr- locates a character in a string.
 * @s: a pointer.
 * @c: a second parameter.
 * Return: return character.
 */

char *_strchr(char *s, char c)
{
	while (c != NULL)
	{
		_putchar(c);
		c++;
	}
	return (*s);
}
