#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (is_sqrt(n, square));
}

/**
 * is_sqrt - function
 *
 * @n: number
 * @carre: test number
 * Return: int
 */
int is_sqrt(int n, int carre)
{
	if (carre * carre == n)
		return (carre);
	else if (carre * carre < n)
		return (is_sqrt(n, carre + 1));
	else if (carre * carre > n)
		return (-1);
	return (-1);
}
