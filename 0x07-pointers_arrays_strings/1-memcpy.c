#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *src_a, *dest_b;

	*src_a = (char *)src;
	*dest_b = (char *)dest;
	for (i = 0; i < n; ++i)
	{
		dest_b[i] = src_a[i];
	}
	return (dest);
}
