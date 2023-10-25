#include "main.h"

/**
 *_pow_recursion - this is the function name
 *@x: this a parameter
 *@y:: this is another function parameter
 *
 *Return: always 0
 */
int _pow_recursion(int x, int y)
{

if (y < 0)

	return (-1);


else if (y == 0)

	return (1);

else

	return (x * _pow_recursion(x, (y - 1)));


return (0);

}
