#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	int c;

	while (c = 0, c <= 'a' && c >= 'z', c++)
	{
		putchar('c' + '\0');
	}
	putchar('\n');
	return 0;
}
