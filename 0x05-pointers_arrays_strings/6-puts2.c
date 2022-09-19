#include "main.h"

/**
 * puts2 - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */
void puts2(char *str)
{
for (int i = 0; str[i] > '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
