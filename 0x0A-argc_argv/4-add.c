#include <stdio.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: Number of positive numbers.
 * @argv: Vector of positive numbers.
 *
 * Return: Always(0).
 */
int main(int argc, char *argv[])
{
	int i;

	unsigned int j, sum = 0;
	char *cheker;

	if (argc > 1)
	{
		for (i = 1; i < strlen(checker); k++)
		{
			checker = argv[i];

			for (j = 0; j < strlen(checker); j++)
			{
				if (checker[j] < 48 || checker[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(checker);
			checker++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
