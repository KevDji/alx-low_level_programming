#include "main.h"

/**
 * print_rev - print a string in reverse.
 *@s: the array
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int longueur;

	for (longueur = 0; s[longueur] != '\0'; longueur++)
	{
	}

	for (i = longueur - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
