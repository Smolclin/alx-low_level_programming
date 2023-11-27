#include <stdio.h>

/**
 * main - function that prints a name
 * of the file it was compiled from
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
