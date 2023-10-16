#include "main.h"

/**
 *puts_half-function prints half of a string
 *followed by a new line
 *@str: this is the refence string
 *Return: 0
 *
 */
void puts_half(char *str)
{
	int full_string, half_string;

	full_string = 0;
	while (str[full_string] != '\0')
		full_string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
		half_string++;

	while (half_string < full_string)
	{
		putchar(str[half_string]);
		half_string++;
	}
	putchar('\n');
}
