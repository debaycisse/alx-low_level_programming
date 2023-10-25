#include "main.h"

/**
 * _pow_recursion - returns the value of raised to power of
 * @x: value to be raised to the power of y parameter
 * @y: value that is used as the power
 *
 * Description: raises x to the power of y
 * Return: the value of x raisedto the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
	y--;
}
