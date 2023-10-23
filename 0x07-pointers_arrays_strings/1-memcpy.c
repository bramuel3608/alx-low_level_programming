#include "main.h"

/**
 *_memcpy- function that copies memory
 *@dest: memory where to store
 *@src: memory where to copy
 *@n: number of bytes
 *
 *Return: copied memory wit n bytes changed
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
