#include <stdio.h>

/**
 * main- entry point
 *
 * Return: Always 0
 */

int main(void)
{
int i;
long int li;
long long int d;
float f;
char c;

printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
