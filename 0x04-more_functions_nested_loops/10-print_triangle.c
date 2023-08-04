#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
int coast1, coast2;

if (size > 0)
{
	for (coast1 = 1; coast1 <= size; coast1++)
	{
		for ((coast2 = size - coast1); coast2 > 0; coast2--)
			_putchar(' ');

		for (coast2 = 0; coast2 < coast1; coast2++)
			_putchar('#');

		if (coast1 == size)
			continue;

		_putchar('\n');
	}
}
_putchar('\n');
}
