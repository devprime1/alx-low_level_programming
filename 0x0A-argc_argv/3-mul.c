#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 * Return: always 0 (success)
 **/

int main(int argc, char *argv[])
{
	int multiply = 0;
	char e[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", e);
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", multiply);
	return (0);
}
