#include "main.h"

/**
 * print_alphabet_x10 - task 2
 *
 * Return - Always 0
 */
void print_alphabet_x10(void)
{
	int k =0;
	while (k < 10)
	{
		char a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		k++;
	}
}
