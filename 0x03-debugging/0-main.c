#include "main.h"

/**
 * positive_or_negative- prints if integer is positive or negative
 * @i: the integer
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	i = 98;
	if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is null", i);
	return (0);
}
