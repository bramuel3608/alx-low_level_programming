#include <unistd.h>

/**
 *_putchar writes character c to stdout
 *@c: the character to print
 *Return: On success 1
 *On error: -1 returned and error is set appropriately
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
