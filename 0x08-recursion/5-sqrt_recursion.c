#include "main.h"

/**
 *_sqrt_recursion- function returns square root of a number
 *@n: this is the number to find its square root
 *
 *Return: always 0
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion- function returns square root of a number
 *@n: this is the number to find its square root
 *@i: this is an iterator
 *
 *Return: always 0
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
