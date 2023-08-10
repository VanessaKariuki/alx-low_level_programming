#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @t: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int t)
{
	void *ptr;

	ptr = malloc(t);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
