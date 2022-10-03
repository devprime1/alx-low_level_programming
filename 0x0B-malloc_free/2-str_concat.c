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
	char *res;
	int i = 0, j = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	res = malloc(k * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (cont = 0; cont < i; cont++)
	{
		res[cont] = s1[cont];
	}
	for (cont = 0; cont <= j; cont++)
	{
		res[cont + i] = s2[cont];
	}
	return (res);
}
