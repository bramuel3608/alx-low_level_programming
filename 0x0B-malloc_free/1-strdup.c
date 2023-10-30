#include "main.h"
#include <stdlib.h>

/**
 *_strdup- function returns a pointer to a new string which is a duplicate
 *of the string str. Memory for the new string is
 *obtained with malloc, and can be freed with free.
 *@str: this is a string
 *
 *Return: NULL if str = NULL
 *
 */
char *_strdup(char *str)
{

	char *duplicate;
	int m, len = 0;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		duplicate[m] = str[m];

	duplicate[len] = '\0';

	return (duplicate);

}
