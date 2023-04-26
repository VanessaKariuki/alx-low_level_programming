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

	if (array && cmp)
	{
		for (l = 0; l < size; l++)
		{
			if (cmp(array[l]) != 0)
				return (l);
		}
	}

	return (-1);
}
