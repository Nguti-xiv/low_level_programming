#include "main.h"
/**
 * print_most _numbers - print numbers from 0 to 9.
 * Do not print 2 and 4.
 * Use `_putchar` twice.
 * Return: void.
 */
void print_most_numbers(void)
{
	int c;

	for (c >= 48 && c <= 57)
	{
		if (c != '2' || c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n')
}
