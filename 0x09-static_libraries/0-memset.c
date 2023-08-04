#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed at
 * @b: constant byte
 * @n: bytes to be filled in memory
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
