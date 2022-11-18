#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - a variadic function that prints numbers, followed by
 * a new line
 * @separator: separator to use. Do not print if it is NULL
 * @n: number of intergers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
