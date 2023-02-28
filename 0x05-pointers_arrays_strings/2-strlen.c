#include "main.h"
#include <string.h>

/**
 * _strlen- returns the length of a string.
 * @s: point to character.
 * Return: Always 0
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
