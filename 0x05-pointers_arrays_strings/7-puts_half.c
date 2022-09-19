#include "main.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */
void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
