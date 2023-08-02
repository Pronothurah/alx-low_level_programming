#include "main.h"

/**
 * is_prime_number - checks if number is prime number
 * @n: input number
 * @n2: int
 * Return: 1 if prime and 0 if otherwise
 */
int check_prime(int n, int n2);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks numbers < n if they are divisible
 * @n: int
 * @n2: int
 * Return: int
 */
int check_prime(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, n2 + 1));
}
