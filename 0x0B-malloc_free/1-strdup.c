#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: input string
 *
 * Return: pointer to space or null if otherwise
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);

	for (; i < size; i++)
		ptr[i] = str[i];

	ptr[size] = '\0';

	return (ptr);
}
