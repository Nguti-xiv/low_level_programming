#include "main.h"
/**
 * print_numbers - print the numbers from 0 - 9 followed by a new line.
 * You can only use `_putchar` twice.
 * Return: void.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

