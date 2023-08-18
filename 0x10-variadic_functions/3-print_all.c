#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_char - formarts character
 * @separator: the string operator
 * @arg: argument pointer
 */
void format_char(char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * format_int - formarts integer
 * @separator: the string operator
 * @arg: argument pointer
 */
void format_int(char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * format_float - formarts float
 * @separator: the string operator
 * @arg: argument pointer
 */
void format_float(char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * format_string - formats string
 * @separator: the string operator
 * @arg: argument pointer
 */

void format_string(char *separator, va_list arg)
{
	char *str = va_arg(arg, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: formart string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arg;
	token_t tokens[] = {
		{"c", format_char},
		{"d", format_int},
		{"f", format_float},
		{"f", format_string},
		{NULL, NULL}
	};
	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, arg);
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
