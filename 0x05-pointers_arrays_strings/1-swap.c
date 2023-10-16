#include "main.h"

/**
 * swap_int - swaps the value of different intergers.
 * @a: integer that is to be swaped
 * @b: integer that is to be swaped
 * Return: 0
 **/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
