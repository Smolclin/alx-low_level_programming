#include <stdio.h>
#include <stdlib.h>

/**
 * print_opscodes - prints the program opscodes
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */

void print_opscodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - print opscode of its own function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opscodes((char *)&main, n);
	return (0);
}
