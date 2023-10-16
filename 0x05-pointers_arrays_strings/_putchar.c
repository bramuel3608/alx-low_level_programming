#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: returns 1  if success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
