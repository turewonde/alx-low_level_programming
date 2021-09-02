#include "main.h"

/**
 *print_numbers - Print the numbers from 0 to 9
 *Return: void
 */

void print_numbers(void)
{
	for (int a = 0; a <= 9; a++) /*Start For*/
	{
		_putchar(a + '0'); /*Print value i*/
	}
	_putchar('\n'); /*New line*/
}
