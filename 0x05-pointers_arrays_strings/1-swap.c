#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: pointer one
 * @b: pointer two
 */
void swap_int(int *a, int *b)
{
	int contener;

	contener = *a;
	*a = *b;
	*b = contener;
}
