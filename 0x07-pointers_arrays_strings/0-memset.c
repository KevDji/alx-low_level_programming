#include "main.h"

/**
 * _memset -function that fills memory
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n ==0)
		return (s);
	*s = b;
	return (_memset((s + 1), b, n - 1));
}
