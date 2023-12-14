#include "main.h"

/**
 * get_endianness - function that checks
 * endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	int big_little;

	big_little = (int) (((char *)&i)[0]);
	return (big_little);
}
