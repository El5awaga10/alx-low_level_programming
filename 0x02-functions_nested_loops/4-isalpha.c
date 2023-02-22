#include "main.h"

/**
 * _isalpha- checks for alphabetic character
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
