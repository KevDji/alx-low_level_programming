#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}
