#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (a[i] != b[i])
		{
			flag = 1;
			break;
		}
		i++
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (s1 - s2);
}
