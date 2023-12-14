#include "main.h"

/**
 * binary_to_uint - function that converts binary
 * numbers to unsigned integer
 * @b: pointer to string
 * Return: converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int string, j, k, add, pow;
	int baze;

	baze = 2;
	add = 0;
	pow = 1;

	if (b == NULL)
		return (0);
	for (string = 0; b[string] != '\0'; string++)
		;
	if (string == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		for (k = string - 1; k > 0; k--)
			pow = pow * baze;
		add = add + (pow * (b[j] - 48));
		string--;
		pow = 1;
	}
	return (add);
}
