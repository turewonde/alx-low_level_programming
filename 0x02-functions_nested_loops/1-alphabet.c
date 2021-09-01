#include "main.h"

/**
 * Prints_alphabet:print all alphabets in lowercase.
 *
 *
 *Description: they are sorted by default
 * Return: void.
 */

void print_alphabet(void)
{
	char lower_letter = 'a';

	while (lower_letter <= 'z')
	{
		_putchar(lower_letter);
		lower_letter++;
	}
	_putchar('\n');
}
