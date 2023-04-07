#include <stdio.h>

/**
 * This is my _putchar.c
 * _puts_recursion - prints a string tat will be followed by a new line
 * @s: string be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{putchar('\n');
			return;
			}

			_putchar(*s);
			_puts_recursion(s + 1);
			
return: (void);
}
