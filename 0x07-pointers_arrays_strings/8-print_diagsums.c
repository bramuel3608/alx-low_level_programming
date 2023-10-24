#include "main.h"

/**
 *print_diagsums- function prints sum of two diagonals of square matrix
 *@a: this is input
 *@size: this is another input
 *
 *Return: always 0.
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, m;

	add1 = 0;
	add2 = 0;

	for (m = 0; m < size; m++)
	{
		add1 = add1 + a[m * size + m];
	}
	for (m = size - 1; m >= 0; m++)
	{
		add2 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
