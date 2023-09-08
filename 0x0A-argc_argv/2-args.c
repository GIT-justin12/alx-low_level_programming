#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments it receives.
 * @argc: Number of arguments.
 * @argv: Vector of string.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
