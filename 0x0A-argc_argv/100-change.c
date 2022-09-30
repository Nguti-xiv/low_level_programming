#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * coinConverter - prints the min coins to change for an amount of money.
 * @i: passed in var from main for calcs.
 * Return: The number of coins needed minimum for the passed in var.
 */

int coinConverter(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		count++;
	}

	return (count);
}

/**
 * main - takes exactly one arg for min coin count
 * @argc: number of cli args.
 * @argv: array name.
 * Return: 0, if exactly 1 arg is passed, else 1.
 */

int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[i]);

	if (i < 0)
		printf("0\n");

	else
	{
		coin = coinConverter(i);
		printf("%d\n", coin);
	}

	return (0);
}
