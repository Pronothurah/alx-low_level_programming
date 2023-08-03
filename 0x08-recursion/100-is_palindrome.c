#include "main.h"

/**
 * last_index - checks for last digit
 * @s: input string
 * @start: int
 * @end: int
 * @mid: int
 * Return: pointer to string
 */
int check(char *s, int start, int end, int mid);
int is_palindrome(char *s);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: input string
 * Return: 1 or 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrom
 * @s: string
 * @start: int
 * @end: int
 * @mid: int
 * Return: 0or -1
 */
int check(char *s, int start, int end, int mid)
{
	if ((start == end && mid != 0) || (start == end + 1 && mid == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mid));
}
