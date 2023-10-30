#include "main.h"
#include <stdlib.h>

/**
 *create_array- function creates an array of characters and initializes
 *it with a specific char
 *@size: this is the size of array
 *@c: character to print
 *Return: returns a pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);
	m = malloc(size * sizeof(*m));
	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = c;

	return (m);
}
