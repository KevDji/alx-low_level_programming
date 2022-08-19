#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * No return
 */


void print_number(int n)
{

	unsigned int nb = 0;

	if  (n < 0)
	{
		nb = -n;
		_putchar('-');
	}

	else
	{
		nb = n;
	}

	if (nb / 10)
	{
		print_number(nb / 10);
	}

	_putchar((nb % 10) + '0');
}
