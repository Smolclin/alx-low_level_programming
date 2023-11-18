#include "main.h"

/**
 * _memset - fills a memory block
 * @s: states the memory address
 * @b: the desired memory value
 * @n: memory bytes to be changed
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
