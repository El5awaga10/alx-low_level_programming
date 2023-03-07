#include "main.h"

/**
 * *_strchr- locates a character in a string.
 * @s: a pointer.
 * @c: a second parameter.
 * Return: return character.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
