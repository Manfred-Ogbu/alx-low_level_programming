#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - this fxn perform a operation given by the use as an
 * operator.
 * @s: operator to perform.
 *
 * Return: A pointer of the function name.
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
	int k;

	k = 0;
	while (ops[k].op != NULL && s[1] == '\0')
	{
		if (ops[k].op[0] == *s)
			return ((ops[k].f));
		k++;
	}

	return (NULL);
}

