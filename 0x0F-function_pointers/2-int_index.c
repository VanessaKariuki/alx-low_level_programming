#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to function comparing values
 * @array: array to search in
 * Return: The index of the first match
 * -1 if invalid size or no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int l;
	int (*ptr)(int);

	if (size <= 0)
		return (-1)

	if (!array || !cmp)
		return (-1);

	ptr = cmp;
	for (l = 0; l < size; l++)
	{
		if (ptr(array[l]))
			return (l);
	}

	return (-1);
}
