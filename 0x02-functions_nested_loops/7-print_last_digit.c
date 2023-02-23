#include "main.h"

/**
 * print_last_digit- prints the last digit of a number.
 * @num: the last digit of number.
 * Return: Always 0
 */

int print_last_digit(int num)
{
	int ld;
	ld = (num % 10);
	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar (ld);
	return (ld);
}
