#include "main.h"

/**
 *swap_int - saps the value of two integers
 *@a: a is an integer
 *@b: b is an integer
 *Return: the values
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
