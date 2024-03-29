#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers.
 * @argc: Count argument.
 * @argv: Content argument.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
