#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguement
 * @argv: array of arguement
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
