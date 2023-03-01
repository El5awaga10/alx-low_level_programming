#include "main.h"

/**
 * print_array- prints n elements of an array of integers
 * @a: a pointer
 * @n: an integer
 * Return: return nothing
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
