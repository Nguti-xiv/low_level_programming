#include "main.h"
#include <stdlib.h>

/**
 * string_noncat - concatenates two string using
 * at most an inputted number of bytes.
 * @s1: the first string
 * @s2: the second string
 * @: max number of bytes s2 to concat s1
 * Return: a pointer to the concated space in mem, else
 * NULL, if the function fails.
 */

char *string_concat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
