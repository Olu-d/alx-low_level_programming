#include<stdarg.h>
#include<stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list string_list;


	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
 		printf("%s", va_arg(string_list, char*));

		if ( i != (n - 1) && (separator != NULL))
			printf("%s", separator);

	}
	printf("\n");

	va_end(string_list);

}

