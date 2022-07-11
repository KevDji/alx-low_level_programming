#include "main.h"

/**
 * *_strcpy - copies string to given memory location
 * @dest: where the string needs to be copied
 * @src: where the string is
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int longueur = 0;

	while (*(src + longueur) != '\0')
	{
		*(dest + longueur) = *(src + longueur);
		longueur++;
	}
	*(dest + longueur) = *(src + longueur);

	return (dest);
}
