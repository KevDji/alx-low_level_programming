#include <unistd.h>

/**
 * main - write to stdout
 * Return/ Always 0
 */
int main(void)
{
	write(1, "and that piece of art is useful\"- Dora Kopar, 2015-10-19\n",60);
	return (1);
}
