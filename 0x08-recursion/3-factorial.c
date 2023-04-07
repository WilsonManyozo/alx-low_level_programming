#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: The num to calculate the factorial
 * Return: Integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
