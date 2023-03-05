#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
