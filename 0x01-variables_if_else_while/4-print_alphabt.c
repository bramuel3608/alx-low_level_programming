#include <stdio.h>
/**
 * main-this is the entry point
 * Return: always 0
 */
int main(void)

{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	if (i == 'q' || i == 'e')
	{
		continue;
	}

putchar(i);

}

putchar('\n');

return (0);

}