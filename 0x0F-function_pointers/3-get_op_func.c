#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user
 * @s: operation passed as arguement
 * Return: the result of the selected choice
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* intialize i */
	i = 0;

	/* s does not match any of the operand */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f); /* return operation */
}
