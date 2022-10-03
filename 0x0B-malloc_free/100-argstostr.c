#include "main.h"
#include <stdlib.h>

/**
  * argstostr - convert the parameters passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  * Return: ...
  */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, count = 0;
	char *res, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			count++;
			new++;
		}
		count++;
		i++;
	}
	res = malloc(count + 1);
	i = 0;
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			res[j] = *new;
			new++;
			j++;
		}
		res[j] = '\n';
		j++;
		i++;
	}
	res[count + 1] = '\0';
	return (res);
}
