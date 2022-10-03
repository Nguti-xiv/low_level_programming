#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the string to be concatenated.
 * @s2: the string to be concatenated.
 * Return: a pointer to the newly allocated space,
 * else, NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	str_concat = malloc(sizeof(char) * len);

	if (str_concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		str_concat[concat_index++] = s1[index];

	for (index = 0; s2[index++]; index++)
		str_concat[concat_index++] = s2[index];

	return (str_concat);
}
