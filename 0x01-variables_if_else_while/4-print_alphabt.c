#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	char c;

	c = 'a';
       if (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
