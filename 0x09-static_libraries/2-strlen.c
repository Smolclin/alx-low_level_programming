#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int longer = 0;

	while (*s != '\0')
	{
		longer++;
		s++;
	}
	return (longer);
}
