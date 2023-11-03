#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range- function creates array of integers
 *@min:  the minimum value in the array
 *@max: the maximum value of the array
 *
 *Return: returns pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
