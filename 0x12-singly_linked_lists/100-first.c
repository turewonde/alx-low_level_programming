#include <stdio.h>

void __attribute__((constructor)) wonde(void);

/**
 *wonde - prints a string
 */

void wonde(void)
{
	printf("You're beat! and yet, you must allow,\n" "I bore my house upon my back!\n");
}
