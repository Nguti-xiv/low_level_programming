#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints sorted
 * from min to max, inclusive.
 * @min: the 1st array val.
 * @max: the last array value.
 * Return: a pointer to the newly created array, else,
 * if min > max or func fails, NULL
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
