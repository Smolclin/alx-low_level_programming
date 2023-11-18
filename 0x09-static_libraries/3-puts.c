#include "main.h"

/**
 * _puts - function that prints string to
 * standard output
 * @str: string to be printed
 * Return: always 0 (success)
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
