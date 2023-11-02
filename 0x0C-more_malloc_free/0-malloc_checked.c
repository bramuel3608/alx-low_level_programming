#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function allocates memory using malloc
 *@b: unsigned int to allocate memory
 *Return: returns pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
