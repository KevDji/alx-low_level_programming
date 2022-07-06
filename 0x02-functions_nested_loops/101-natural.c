#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int somme = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			somme += n;
		}
	}
	printf("%d\n", somme);
	return (0);
}
