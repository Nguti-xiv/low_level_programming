#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: print "The size of various types on the computer it is compiled and run on"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a short: %lu byte(s)\n", sizeof(short));
	printf("Size of a long: %lu byte(s)\n", sizeof(long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));

	return (0);
}
