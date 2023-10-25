#include "main.h"

/**
 *factorial- function returns factorial of agiven number
 *@n: this is an integer
 *
 *Return: function n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
