#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the
 * sum of all parameters
 * @n: the number to be added up
 * Return: always 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list memo;

	va_start(memo, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(memo, const unsigned int);
	}
	va_end(memo);
	return (sum);
}
