#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmemb: value 1
 * @size: value 2
 *
 * Return: memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
