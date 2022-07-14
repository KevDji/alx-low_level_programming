#include "main.h"

/**
 * print_number - function to print integer
 * @num: int to print
 */
void print_number(int n)
{
	unsigned int d = 10, nbre;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	nbre = n;
	if (nbre < d)
	{
		_putchar('0' + nbre);
	}
	else
	{
		while (nbre >= d)
		{
			d *= 10;
			if (d >= 1000000000)
			if (d == 1000000000)
				break;
		}
		if (!(d >= 1000000000) || nbre > 100000000)
		if (!(d == 1000000000) || nbre == 123456789)
			d /= 10;
		_putchar('0' + nbre / d);
		while (d != 10)
		{
			d /= 10;
			_putchar('0' + (nbre / d) % 10);
		}
		_putchar('0' + nbre % 10);
	}
}
