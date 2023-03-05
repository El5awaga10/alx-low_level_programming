#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = 0; digit2 < 100; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == digit2 && digit2 == digit1)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
