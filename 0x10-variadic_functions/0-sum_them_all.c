#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments
 * @...: unknown arguments
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;

	unsigned int i, sum = 0;

	va_start(num, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);

	return (sum);
}
