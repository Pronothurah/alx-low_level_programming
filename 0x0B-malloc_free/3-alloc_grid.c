#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: array width
 * @height: array height
 * Return: pointer or null on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(*arr) * height);

	if (width == 0 || height == 0 || arr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
