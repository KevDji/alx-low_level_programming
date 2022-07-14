#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: char var 1.
 * @s2: char var 2.
 * Return: valeur
 */

int _strcmp(char *s1, char *s2)
{
	int resultat = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		resultat = *s1 - *s2;

	return (resultat);
}
