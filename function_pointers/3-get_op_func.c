#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * get_op_func - the function that selects the
  *               correct function for the operation
  *
  * @s: is the operator.
  *
  * Return: This function returns a pointer
  *         to the function that corresponds
  *         to the operator given as a parameter,
  *         If s does not match any of the 5 expected operators
  *          (+, -, *, /, %), return NULL
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
