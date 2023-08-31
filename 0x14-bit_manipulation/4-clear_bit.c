#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: number to index
 * @index: index to arrive at
 *
 * Return: 1n if succesful or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
