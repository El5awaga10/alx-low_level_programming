#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
