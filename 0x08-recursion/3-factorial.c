#include <stdio.h>

/**
 * factorial - returns factorial of a given mumber
 * @n: input integer
 * Return: -1, 0 or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
