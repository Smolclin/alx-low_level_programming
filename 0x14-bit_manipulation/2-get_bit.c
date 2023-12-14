#include "main.h"

/**
 * get_bit - function that returns the value of
 * a bit at a given index
 * @n: number of bits
 * @index: the index of the bits
 * Return: the value of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
