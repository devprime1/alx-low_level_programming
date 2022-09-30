#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{

	int j;
	long int fi1, fi2, fi3, suma;

	fi1 = 1;
	fi2 = 0;
	suma = 0;
	for (j = 1; j < 50; j++)
	{
		fi3 = fi1 + fi2;
		if ((fi3 <= 4000000) && (fi3 % 2 == 0))
			suma = suma + fi3;
		fi2 = fi1;
		fi1 = fi3;
	}
	printf("%ld\n", suma);
	return (0);
}
