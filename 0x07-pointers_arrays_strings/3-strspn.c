#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@accept: this is where the bytes also come from
 *@s: number of bytes to be counted
 *
 *Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
