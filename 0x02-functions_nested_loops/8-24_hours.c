#include "main.h"

/**
 * jack_bauer- prints every minute of the day 
 * Return: Always 0
 */

void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			printf("%d02:%d02", h, m);
			m++;
		}
		h++;
	}
}
