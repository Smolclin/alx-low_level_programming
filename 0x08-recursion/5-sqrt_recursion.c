#include "main.h"
#include <stdio.h>

int _sqrt(int n, int m);

/**
 * _sqrt_recursion - function that return square
 * root of a number
 * @n: the number whose square root is to be determined
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: number whose square root is to be determmined
 * @m: iterate number
 * Return: natural square root
 */

int _sqrt(int n, int m)
{
	int sqrt = m * m;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (m);
	return (_sqrt(n, m + 1));
}
