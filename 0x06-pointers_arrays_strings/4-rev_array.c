#include "main.h"

/**
 * reverse_array - reverses integere in an array
 * @a: array of integers
 * @n: number of elements to be swapped
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
