#include "main.h"

/**
 * more_numbers - prints the 10x numbers, from 0 to 14, followed by a new line
 *
 * Return: No return value (void)
 */

void more_numbers(void)
{
	int i, j, num;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				num = j % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
