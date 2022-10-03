#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the concatenated strings
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, length = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	length = i + j;
	s = malloc(sizeof(char)) * (length + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (k < length)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
