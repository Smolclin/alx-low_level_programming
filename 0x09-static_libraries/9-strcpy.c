#include "main.h"

/**
 * _strcpy - function that copies string to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: always 0 (succes)
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
