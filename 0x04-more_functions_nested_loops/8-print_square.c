#include "main.h"
/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int coast1, coast2;
	if (size > 0)
	{
		for (coast1 = 0; coast1 < size; coast1++)
		{
			for (coast2 = 0; coast2 < (size - 1); coast2++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
