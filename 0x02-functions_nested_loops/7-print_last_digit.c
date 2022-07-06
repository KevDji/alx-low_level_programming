#include "main.h"

/**
 * print_last_digit - Task 7
 *@n: Extraction
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	n = -n;
	k = n % 10;
	if (k < 0)
	k = -k;
	_putchar(k + '0');
	return (k);
}

