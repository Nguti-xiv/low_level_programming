#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate mem for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: number of elements
 * @size: the byte size of each  array element.
 * Return: a pointer to allocted mem, else,
 * if nmemb = 0, size = 0 or func fails, NULL.
 */

void *_calloc(unsignned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmem == 0 || size 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
