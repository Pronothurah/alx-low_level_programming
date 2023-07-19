#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: starting point
 *
 * Return: returns nothing
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            putchar(i / 100 + '0');
            putchar(i / 10 % 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }
    else
    {
        for (i = n; i > 98; i--)
        {
            putchar(i / 100 + '0');
            putchar(i / 10 % 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }

    putchar('9');
    putchar('8');
    putchar('\n');
}
