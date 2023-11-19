#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguement passed on
 * @argc: number of arguement
 * @argv: array of arguement
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
