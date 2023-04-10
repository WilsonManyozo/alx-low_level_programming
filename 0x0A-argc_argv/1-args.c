#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
