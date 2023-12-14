#include "main.h"

/**
 * clear_bit - function that sets the
 * value of bit to 0 at a given index
 * @n: number of bits
 * @index: the index of bits
 * Return: 1 if true -1 if false
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	max = 1;
	max = max << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = max ^ *n;
	return (1);
}
