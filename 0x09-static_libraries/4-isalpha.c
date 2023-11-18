#include "main.h"

/**
 * _isalpha - function that checks for alphabetic
 * character
 * @c: the character to be checked
 *
 * Return: always 0 (success)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
