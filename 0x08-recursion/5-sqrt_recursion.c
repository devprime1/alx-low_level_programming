#include "main.h"
/**
 * sq - Finds the square root of two numbers
 * @base: The number
 * @exp: The number to test for the square root of @base
 * Return: square root
 */
int sq(int base, exp)
{
	if (exp * exp > base)
	{
		return (-1);
	}
	else if (exp * exp == base)
	{
		return (exp);
	}
	else
	{
		return (sq(base, exp + 1));
	}
return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
return (sq(n, 1));
}
