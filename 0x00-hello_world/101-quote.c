#include <unistd.h>

/**
* main - Prints the final part of a quote
* Return: Always 1 (by requeriment)
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);

	return (1);
}
