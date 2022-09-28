#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural root of given number.
 * @num: The number to find it's root.
 * @root: the root to be tested.
 * Return: the root, if the input has a natural root, else, -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the root of a natural number.
 * @n: the number to find it's root.
 *
 * Return: the natural swuare root of n, if n has a natural root, else, -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
