#include <stdio.h>
#include "main.h"

/**
 * main- entry point
 * positive_or_negative- prints if integer is positive or negative
 * @i: the integer
 * Return: Always 0
 */

positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is null", i);
	return (0);
}

int main(void)
{
	int i = 98;

	positive_or_negative(i);

	return (0);
}
