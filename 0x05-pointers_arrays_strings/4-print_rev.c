#include "main.h"

/**
 *print_rev - function that prints string in reverse
 *@s: this is the string reference point
 *Return: returns 0.
 *
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;

	while (start--)
		putchar(s[start]);

	putchar('\n');
}

