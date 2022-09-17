#include <stdio.h>

/**
*main - Prints the size of many var types
*
*Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %d byte(s)\n", sizeof(a));
	printf("Size of int: %d byte(s)\n", sizeof(b));
	printf("Size of long int: %d byte(s)\n", sizeof(c));
	printf("Size of long long int: %d byte(s)", sizeof(d));
	printf("Size of float: %d bytes(s)", sizeof(e));
	return (0);
}
