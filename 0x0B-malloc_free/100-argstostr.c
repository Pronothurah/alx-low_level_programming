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
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, new_count++)
		new_count += _strlen(av[i]);
	s = malloc(sizeof(char) * new_count + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	return (s);
}
