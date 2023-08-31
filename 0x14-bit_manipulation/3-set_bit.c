#include "main.h"

/**
 * set_bit - sets bit at index
 * @n: number to index
 * @index: index to arrive at
 *
 * Return: 1n if succesful or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
