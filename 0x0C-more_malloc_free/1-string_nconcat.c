#include "main.h"

/**
 * string_nconcat - cocacenates two strings
 * @s1: pointer string one
 * @s2: pointer to string 2
 * @n: number of bytes from s2 to be cocacenated
 *
 * Return: pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_lgth, s2_lgth;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_lgth = 0; s1[s1_lgth] != '\0'; s1_lgth++)
		;
	for (s2_lgth = 0; s2[s2_lgth] != '\0'; s2_lgth++)
		;

	str = malloc(s1_lgth + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
