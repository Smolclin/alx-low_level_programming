#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract one number from the
 * other
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: the product of of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by the other
 * @a: first number
 * @b: second number
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of a and b
 * @a: first number
 * @b: second number
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
