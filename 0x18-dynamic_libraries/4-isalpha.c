#include "main.h"

/**
 * _isalpha -Checks for alphabet
 * @c: The function to be printed
 * Return: 1 if its alphabet
 * and 0 if not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
