#include<stdarg.h>
#include<stdio.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The last parameter (Variadic functions must have at least one
 * named parameter. This is how it knows the value of the last arg (man va_arg)
 * Return: The sum of the input parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list va; /* declare a variable of type va_list */
	unsigned int i;
	int sum = 0;

	/*validate input*/
	if (n == 0)
		return (0);

	va_start(va, n); /* initialize the argument list */

	for (i = 0; i < n; i++) /* input paramater list has n as number of args */
	{
		sum += va_arg(va, int); /* va_arg starts from the arg after n (man va_arg) */
	}
	va_end(va);

	return (sum);
}
