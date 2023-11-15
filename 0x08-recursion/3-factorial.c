#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a number
 * @n: number to be factorized
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
