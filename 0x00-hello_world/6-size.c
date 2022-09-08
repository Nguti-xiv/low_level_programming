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
	printf("Size of a char: %d byte(s)\n," (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n," (int) sizeof(int));
	printf("Size of a short: %d byte(s)\n," (int) sizeof(short));
	printf("Size of a long: %d byte(s)\n," (int) sizeof(long));
	printf("Size of a float: %d byte(s)\n," (int) sizeof(float));
	printf("Size of a double: %d byte(s)\n," (int) sizeof(double));

	return (0);
}
