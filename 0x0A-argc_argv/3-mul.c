#include <stdio.h>

/**
 * main- Entry point
 * @argc: a counter
 * @argv: an array
 * Return: return 0
 */

int main(int argc, int *argv[])
{
	int mul;

	if (argc == 0 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}
	return (0);
}
