#include <stdio.h>

/**
 * main- Entry point
 * Return: return 0
 */

int main(void)
{
	int i;
	char alpha;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	alpha = 'a';
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
