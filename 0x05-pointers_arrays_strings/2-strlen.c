#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: String to be checked
 *Return: Returns the length of the string
 **/

int _strlen(char *s)
{

	int string_length = 0;

	while (s[string_length])
		string_length++;

	return (string_length);

}
