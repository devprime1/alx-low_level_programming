#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	for (int l = 0; int h = n - 1; l < h; l++, h++)
	{
		int tp = a[l];

		a[l] = a[h];
		a[h] = tp;
	}
}
