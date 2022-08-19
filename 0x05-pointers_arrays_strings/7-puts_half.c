#include "main.h"

/**
 * puts_half - prints the second half
 * @str:  string pointer
 * Return: void
 */
void puts_half(char *str)
{
	int longueur = 0;

	while (*(str + longueur) != '\0')
		longueur++;
	if (longueur % 2 == 0)
		longueur /= 2;
	else
		longueur = longueur / 2 + 1;
	while (*(str + longueur) != '\0')
	{
		_putchar(*(str + longueur));
		longueur++;
	}
	_putchar('\n');
}
