#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: The number to be printed
 * Return: Value of last digit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last < -1;
	}
	_putchar(last + '9');
	return (last);
}
