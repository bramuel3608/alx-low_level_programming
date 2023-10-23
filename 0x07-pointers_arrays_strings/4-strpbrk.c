#include "main.h"

/**
 *_strpbrk - this is the entry point
 *@s: this is a string
 *@accept: this is also a string
 *
 *Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
			return (s);
		}
	s++;
	}
	return ('\0');
}
