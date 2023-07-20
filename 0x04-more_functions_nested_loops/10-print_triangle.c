#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * Description: prints triangle
 * @size: size of triangle
 * Return: Void
 */
void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
