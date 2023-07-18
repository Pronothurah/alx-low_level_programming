#include "main.h"

/**
 * print_sign - prints plus if greater than zero
 * 0 if its equal to zero and 1 minus if less than zero
 *
 * @n: An ASCII character
 *
 * Return: 1 if plus 0 if equal 0 and - if negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
