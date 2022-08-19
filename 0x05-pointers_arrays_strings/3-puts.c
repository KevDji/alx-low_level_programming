#include "main.h"

/**
 * _puts - print a string
 * @str:  pointer argument
 * Return: void
 */
void _puts(char *str)
{
	int longueur;

	longueur = 0;
	while (*(str + longueur) != '\0')
	{
		_putchar(*(str + longueur));
		longueur++;
	}
	_putchar('\n');
}
