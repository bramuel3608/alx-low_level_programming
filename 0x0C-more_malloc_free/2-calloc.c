#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_calloc- function allocates memory for an array using malloc
 *@nmemb: integer to allocate memory
 *@size: size of bytes to allocate an integer
 *
 *Return: returns apointer the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);

}
