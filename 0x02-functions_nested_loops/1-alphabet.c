#include "main.h"
/**
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * print_alphabet - print alphabet in lowercase with _putchar
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
