#include "main.h"

/**
 * _strncpy - function that copies the length
 * of a string
 * @dest: input
 * @src: input
 * @n: iput
 * Return: always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] != '\0';
		b++;
	}
	return (dest);
}
