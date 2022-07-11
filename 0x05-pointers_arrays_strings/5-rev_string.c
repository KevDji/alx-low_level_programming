#include "main.h"

/**
 * rev_string - prints given string in reverse
 * @s: passed pointer argument for string
 * Return: void
 */
void rev_string(char *s)
{
	int longueur = 0, i, j;
	char c;

	while (*(s + longueur) != '\0')
	{
		longueur++;
	}
	j = longueur;
	longueur--;
	for (i = 0; i < j / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + longueur);
		*(s + longueur) = c;
		longueur--;
	}
}
