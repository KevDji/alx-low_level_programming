#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit
 * description of task 1
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n, digital;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digital = n % 10;

	if (digital == 0)
		printf("Last digit of %d is %d and is 0\n", n, digital);
	else if (digital > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digital);
	else
		printf("Last digit of %d is %d and is less than 6\n", n, digital);

	return (0);
}
