#include "main.h"

/**
 * _strspn - function that gets the lenght of prfix substring
 * @s: string to work on
 * @accept: pattern to match against
 * Return: unsigned int to how many initial bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, longueur = 0, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				longueur++;
				break;
			}
		}
		if (longueur != 0)
			match++;
		if (match != longueur)
			return (longueur);
	}
	return (0);
}
