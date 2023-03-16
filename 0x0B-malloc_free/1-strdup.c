#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns a pointer to a newly allocated space
 * @str: array of characters
 * Return: return a string
 */

char *_strdup(char *str)
{
	char *a;
	int num_of_elements;
	int i;

	num_of_elements = sizeof(str)/sizeof(str[0]);
	a = malloc(sizeof(char) * num_of_elements);
	if (str == NULL)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < num_of_elements; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
