#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	char e;
	long int v;
	long long int i;
	float n;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	return (0);
}
