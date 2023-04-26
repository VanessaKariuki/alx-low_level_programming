#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (size <= 0)
		return;

	if (array == NULL || action == NULL)
		return;
	for (v = 0; v < size; v++)
		action(array[v]);
}
