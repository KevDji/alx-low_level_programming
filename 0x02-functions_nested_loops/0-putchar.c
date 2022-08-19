#include "main.h"

/**
 * main -  Execution task 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	char table[] = "_putchar";

	int k;

	for (k = 0; k < 8; k++)
	{
		_putchar(table[k]);
	}
	_putchar('\n');
	return (0);
}
