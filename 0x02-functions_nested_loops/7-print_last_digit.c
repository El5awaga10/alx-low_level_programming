#include "main.h"

/**
 * print_last_digit- prints the last digit of a number.
 * Return: Always 0
 */

int print_last_digit(int)
{
	int num;
	int last_digit;
	last_digit = num % 10;
	_putchar (last_digit);
	return (0);
}
