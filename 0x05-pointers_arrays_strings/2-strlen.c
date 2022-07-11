#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 *
 * @s: pointer to string to work on
 * Return: string
 */
int _strlen(char *s)
{
	int longueur;

	longueur = 0;
	while (*(s + longueur) != '\0')
		longueur++;

	return (longueur);
}
