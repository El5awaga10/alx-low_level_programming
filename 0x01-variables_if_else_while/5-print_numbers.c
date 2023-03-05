#include <stdio.h>

/**
 * main- entry point
 * Return: return 0
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
