#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the comparative of number
 * Return: Always 0
 */

int main(void)
{
	int n, lastDigi;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigi = n % 10;

	if (lastDigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigi);
	}
	else if (lastDigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigi);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigi);
	}

	return (0);
}
