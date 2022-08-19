#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Always
 */


int main(void)
{
	long int x = 612852475143;
	long int rpd;

	for (rpd = 2; rpd < x; rpd++)
	{
		if (x % rpd == 0)
		{
			x = x / rpd;
		}
	}
	printf("%ld\n", rpd);
	return (0);
}
