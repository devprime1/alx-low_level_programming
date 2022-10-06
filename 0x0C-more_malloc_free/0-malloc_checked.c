#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
