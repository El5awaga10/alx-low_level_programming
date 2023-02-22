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
	if (islower(i))
		while (i!=EOF)
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
        return (0);
}
