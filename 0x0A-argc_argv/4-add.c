#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs correctly.
 */

int main(int argc, char *argv[])
{
	int sum, n;
	char *x;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (n = 1; argv[n]; n++)
		{
			num = strtol(argv[n], &x, 10);
			if (!*x)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
