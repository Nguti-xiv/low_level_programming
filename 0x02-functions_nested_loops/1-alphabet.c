#include "main.h"

/**
 * main - main block
 * Description: Print alphabet in lowercase.
 * Rerturn: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
