#include "main.h"

/**
 * _abs - computes absolute value of integer
 *
 * @i: input mumber as integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
