#include "main.h"

/**
 * main - Entry point
 *
 * Description:  prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always (0) success
 */
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
