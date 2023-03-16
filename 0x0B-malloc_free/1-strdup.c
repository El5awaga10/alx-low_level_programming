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
	int r = 0;
	int i;

	while (str[r] != '\0')
	{
		r++;
	}
	a = malloc(sizeof(char) * (r + 1));
	if (str == NULL)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
