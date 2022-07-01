#include <stdio.h>
#include <stdlib.h>

/**
 * main - alphabet
 * Description of the task 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
