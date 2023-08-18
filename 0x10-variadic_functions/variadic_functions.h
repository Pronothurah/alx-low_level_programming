#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
