#include "main.h"

/**
 *_puts - prints a string followed by a new line
 *@str: sting to be printed
 *
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
			i++;
	}
	putchar('\n');
}
