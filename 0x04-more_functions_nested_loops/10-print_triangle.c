#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  */
void print_triangle(int size)
{
	int i, a, b, j, k;

	if (size > 0)
	{
		a = size - 1;
		b = size - 1;
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = a; k < size; k++)
			{
				_putchar('#');
			}
			b--;
			a = b;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
