#include "main.h"

/**
 * jack_bauer - returns minutes of a day
 *
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a <= 2 && b <= 4)
						break;
					_putchat(a + 48);
					_putchat(b + 48);
					_putchat(58);
					_putchat(c + 48);
					_putchat(d + 48);
					_putchat('\n');
				}
			}
		}
	}
}
