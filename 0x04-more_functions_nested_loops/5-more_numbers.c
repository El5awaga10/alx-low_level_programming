#include "main.h"

/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 *
 * Return: return nothing
 */

void more_numbers(void)
{
	int count, i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
