#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: memory
 */
int *array_range(int min, int max)
{
	int *memory;
	int difference, i;

	if (min > max)
		return (NULL);

	difference = max - min;
	memory = malloc((difference + 1) * sizeof(int));
	if (memory == NULL)
		return (NULL);

	for (i = 0; i <= difference; i++)
		memory[i] = min++;

	return (memory);
}

