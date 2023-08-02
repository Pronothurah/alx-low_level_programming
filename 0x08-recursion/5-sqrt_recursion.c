#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural squareroot of
 * a number
 * square - finds square root
 * @n: input number
 * @val: square root
 * Return: roor or -1
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square numbers
 * Description: finds square root
 * @n: input
 * @val: input
 * Return: square root or -1
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);
}
