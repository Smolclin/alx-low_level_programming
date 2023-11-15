#include "main.h"
#include <stdio.h>

int check_prime(int n, int m);

/**
 * is_prime_number - function that returns
 * a prime number
 * @n: number to be returned as prime
 * Return: prime numbers
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks the prime number
 * @n: number to be checked
 * @m: iteration times
 * Return: 1 for prime number 0 for none
 */

int check_prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (n % m == 0 && m > 1)
		return (0);
	if ((n / m) < m)
		return (1);
	return (check_prime(n, m + 1));
}
