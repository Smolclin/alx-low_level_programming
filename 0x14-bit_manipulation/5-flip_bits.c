#include "main.h"

/**
 * flip_bits - function that returns number of
 * bits that you would need to flip to get from
 * one number to another
 * @n: number of bits
 * @m: the times to flip
 * Return: always 0 (success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int list, cnt;

	list = n ^ m;
	for (cnt = 0; list > 0;)
	{
		if ((list & 1) == 1)
			cnt++;
		list = list >> 1;
	}
	return (cnt);
}
