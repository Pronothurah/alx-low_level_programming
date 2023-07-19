#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: starting input
 *
 * Return: f n is greater than 15 or less than 0 the
 * function should not print anything
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n <= 0)
	{
		for (num = n; num <= 15; num++)
		{
			_putchar(48);
			for (mult = n; mult <= 15; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');		}
	}
}
