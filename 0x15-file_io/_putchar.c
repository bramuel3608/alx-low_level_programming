#include <unistd.h>

/**
 *_putchar- function prints character to stdout
 *@c: The character to print
 *
 *Return: On success 1
 *On error: -1 is returned and error is set appropriatley
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
