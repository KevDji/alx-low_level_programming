#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print number from 0 to 9.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
