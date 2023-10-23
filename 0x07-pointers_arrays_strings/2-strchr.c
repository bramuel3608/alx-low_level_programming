#include "main.h"

/**
 *_strchr-function locates a character in a string
 *@s: this is the input
 *@c: this is input
 *
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
