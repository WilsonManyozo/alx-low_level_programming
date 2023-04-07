#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to power of y
 * @x: The value to multiply
 * @y: The times to multiply the value
 * Return: The value multiplied by y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
