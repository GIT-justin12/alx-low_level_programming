#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			_putchar(c);
		}
		_putchar('\n');
	}
}
