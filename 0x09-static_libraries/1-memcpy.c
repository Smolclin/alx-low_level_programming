#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory storage
 * @src: memory copied
 * @n: number of bytes
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
