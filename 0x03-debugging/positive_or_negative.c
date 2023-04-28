#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - checks for positive or negative numbers
 * @n: the number to be checked
 * Return: 0 (succeess)
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
}
