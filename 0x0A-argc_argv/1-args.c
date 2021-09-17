#include <stdio.h>

/**
 *main - print its name
 *@argc: arguments count
 *@argv: arguments array
 *Return: 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
