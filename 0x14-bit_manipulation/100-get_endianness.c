#include "main.h"

/**
 * get_endianness - hecks the endianness.
 *
 * Return: 0 if big endian 1 if smaal
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
