#include "main.h"

/**
 * _isupper -  checks the uppercase letter
 * @c: letter to be checked
 * Return: always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
