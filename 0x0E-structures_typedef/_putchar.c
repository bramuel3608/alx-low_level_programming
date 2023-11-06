#include <unistd.h>

/**
 *_putchar- function writes character c to stdout
 *@c: the character to print
 *
 *Return: On success 1
 *On error: -1 is returned and error is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c,c 1));
}
