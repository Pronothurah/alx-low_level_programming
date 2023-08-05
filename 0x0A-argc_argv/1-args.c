#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: number of cmd line args
 * @argv: pointer to array of cmd args
 * Return: 0 success, othersise fail
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
