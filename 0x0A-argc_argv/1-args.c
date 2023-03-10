#include <stdio.h>

/**
 * main- Entry point
 * @argc: a counter
 * @argv: a pointer
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	count = 0;
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			sum = sum + count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
