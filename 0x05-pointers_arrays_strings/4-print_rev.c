#include "main.h"

/**
 *print_rev - print a string in reverse
 *@s: Char in pointer
 *
 *Return: returns the reverse string
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	for (c -= 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
