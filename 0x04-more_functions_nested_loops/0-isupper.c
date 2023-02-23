#include "main.h"

/**
 * _isupper- checks for uppercase character
 * @c: the character
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
