#include "main.h"

/**
 * Print_alphabet - print all alphabets in lowercase.
 *
 *
 *Description: they are sorted by default
 *return void.
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
