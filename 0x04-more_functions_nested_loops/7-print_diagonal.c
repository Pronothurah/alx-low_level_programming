#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times character should be printed
 */
void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space <= pos; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
