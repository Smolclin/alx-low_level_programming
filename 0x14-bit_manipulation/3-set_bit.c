#include "main.h"

/**
 * set_bit - function that sets the value
 * of bit to 1 at a given index
 * @n: pointer to the number of bits
 * @index: the index of bits
 * Return: laways 0 (success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	max = 1;
	max = max << index;
	*n = ((*n) | max);
	return (1);
}
