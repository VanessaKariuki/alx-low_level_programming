#include <stdlib.h>
#include "main.h"

/**
 **create_array - creates an array of chars
 *and initializes it with specific char
 *@size: size of the array to create
 *@c: char to initialize array c
 *
 *Return: pointer to the array (success), NULL = 0 (error)
 *
 */
char *create_array(unsigned int size, char c);
 ({
	char *v;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	v = (char *) malloc(sizeof(char) * size);

	if (v == NULL)
		return (0);

	while (i < size)
	{
		*(v + i) = c;
		i++;
	}

	*(v + i) = '\0';

	return (v);
})
