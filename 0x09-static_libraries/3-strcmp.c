#include "main.h"

/**
 * _strcmp - function that compares string
 * value
 * @s1: input
 * @s2: input
 *
 * Return: always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		while (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
