#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char vi;
	char nu = '0';

	while (nu <= '9')
	{
		putchar(nu);
		nu++;
	}
	for (vi = 'a'; vi <= 'f'; vi++)
	{
		putchar(vi);
	}
	putchar('\n');
	return (0);
}
