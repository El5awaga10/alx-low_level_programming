#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main- entry point
 * prints the alphabet
 * Return: Always 0
 */

int main(void)
{
	int i= 0;
	char c;
	if (islower(c))
		while (i!=EOF)
		{
			_putchar(c);
			i++;
		}
	_putchar('\n');
        return (0);
