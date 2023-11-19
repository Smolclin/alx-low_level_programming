#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguements
 * it receives
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
