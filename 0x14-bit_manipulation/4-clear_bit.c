#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0.
 * @n: pointer to the number to change.
 * @index: index of the bit to clear.
 *
 * Return: 1 for sucess, -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
