#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i;
	{
		for (i = 0; i i= n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
