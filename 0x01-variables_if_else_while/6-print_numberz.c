#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digital;

	for (digital = 0; digital < 10; digital++)
	putchar(digital + '0');

	putchar('\n');

	return (0);
}
