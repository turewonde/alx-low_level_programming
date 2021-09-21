#include "main.h"

/**
 *_isupper - Checks for upercase character
 *@c: integer type
 *
 *Return: 1 if upercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
