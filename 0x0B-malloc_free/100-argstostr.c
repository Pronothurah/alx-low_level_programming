#include "main.h"

/**
 * _strlen - finds string length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - concacenates arguments in a string
 *
 * @ac: argument one
 * @av: argument 2
 *
 * Return: pointer to a new string or NULL if otherwise
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, new_count = 0, cmpt = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
}
