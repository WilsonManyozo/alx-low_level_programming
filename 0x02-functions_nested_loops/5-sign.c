#include "main.h"

/**
 * print_sign - Prints sign of number
 * @n: The number to be printed
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(43);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (0);
	}
}
