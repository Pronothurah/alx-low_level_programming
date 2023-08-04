#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 *
 * @c: starting input
 *
 * Return: 1 if is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
