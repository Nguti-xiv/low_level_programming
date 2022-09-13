#include "main.h"

/**
 * main - main block
 * Description: Checks for alphabetic character.
 * Returns: 1 if c is a letter, lowercase or uppercase.
 * Returns: 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a'; && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
