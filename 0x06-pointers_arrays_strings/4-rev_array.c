#include "main.h"

/**
 *reverse_array- function prints array in reverse
 *@a: an array of integers
 *@n: number of elements to swap
 *Return: 0
 *
 */
void reverse_array(int *a, int n)
{
	int m;
	int x;

	for (m = 0; m < n--; m++)
	{
		x = a[m];
		a[m] = a[n];
		a[n] = x;
	}

}
