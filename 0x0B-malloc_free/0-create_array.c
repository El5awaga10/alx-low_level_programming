#include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of chars
 * @size: the size of array.
 * @c: A character.
 * Return: return a character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;
	
	if (size == 0 || m == NULL)
		return (NULL);
	i = 0;
	m = malloc(sizeof(c) * size);
	while(i < size)
	{
		m[i] = c;
		return (m[i]);
		_putchar(' ');
		i++;
	}
}
