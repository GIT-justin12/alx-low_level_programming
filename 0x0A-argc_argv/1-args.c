#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments passed into program.
 * @argc: Number of arguments.
 * @argv: Vector of string.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
