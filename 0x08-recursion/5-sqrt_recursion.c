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
	else
		return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion- function returns square root of a number
 *@number: this is the number to find its square root
 *@i: this is an iterator
 *
 *Return: always 0
 */
int actual_sqrt_recursion(int number, int i)
{
	if ((i * i) > number)
	{
		return (-1);
	}
	else if ((i * i) == number)
	{
		return (1);
	}
	else
		return (actual_sqrt_recursion(number, i + 1));

}
