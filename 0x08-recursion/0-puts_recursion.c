#include "main.h"

/**
 *_puts_recursion- function prints a string
 *@s: this is the string to print
 *
 *Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
