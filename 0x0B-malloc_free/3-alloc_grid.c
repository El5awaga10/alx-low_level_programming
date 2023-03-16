#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array
 * @width: the width of array
 * @height: the height of array
 * Return: return 0
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int *arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
