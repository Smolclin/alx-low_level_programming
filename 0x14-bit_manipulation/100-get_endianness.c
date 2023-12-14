#include "main.h"

/**
 * get_endianness - function that checks
 * endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 0;
	int little_big;

	little_big = (int) (((char *)&i)[0]);
	return (little_big);
}
