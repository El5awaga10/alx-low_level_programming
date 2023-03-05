#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	char c, b;

	c = 'a';
	b = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
