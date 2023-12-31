#include "main.h"

/**
 *_strncat- function concatenates two strings
 *@dest: this is input value
 *@src: this is input value
 *@n: this is input value
 *Return: alwys 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
