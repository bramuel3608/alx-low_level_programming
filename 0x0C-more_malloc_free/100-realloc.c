#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;

	if (new_size > old_size)
	{
		x = malloc(new_size);
		free(ptr);
		return (x);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);
		free(ptr);
		return (x);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
