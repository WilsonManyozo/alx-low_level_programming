#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: striing 1
 * @S2: string 2
 * Return: 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == *s1)
		return (wildcmp(s1, s2 + 1) || wildcmp(s2, s1 + 1));
	else
		return (1);
}