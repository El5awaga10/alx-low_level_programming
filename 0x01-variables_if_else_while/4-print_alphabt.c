#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
