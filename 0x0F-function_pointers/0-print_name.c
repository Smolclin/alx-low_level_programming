#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to the variable name
 * @f: pointer to the function
 * Return: always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
