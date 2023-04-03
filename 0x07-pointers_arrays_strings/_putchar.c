#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @C: To print character
 * Return: 1 if success, -1 if error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
