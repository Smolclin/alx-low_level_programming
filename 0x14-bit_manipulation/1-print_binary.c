#include "main.h"
/**
 * print_b - prints recursive of binary
 * rep of a number
 * @n: input
 * Return: null
 */

void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b(n >> 1);
	if ((n & 1) == 1)
		putchar('1');
	if ((n & 1) == 0)
		putchar('0');
}

/**
 * print_binary - prints a binary representation
 * of a number
 * @n: number input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
	{
		print_b(n);
	}
}
