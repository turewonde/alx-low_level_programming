#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - execute afunction pointer on an element of an arry
 *@array: array of integers
 *@size: six=ze of array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
