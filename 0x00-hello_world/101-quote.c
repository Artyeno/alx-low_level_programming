#include <unistd.h>

/**
*main - Prints a text
*
*Return: 1
*/
int main(void)
{
	write(2, "and that piece is useful\" - Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
