#include "main.h"

/**
 *_strcat- function concatenates two strings
 *@dest: this is the input value
 *@src: this is input value
 *Return: Always 0
 *
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);


}
