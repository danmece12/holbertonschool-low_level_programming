#include "3-calc.h"

/**
 * get_op_func - select the correct operation function based on s[0]
 * @s: the operator string (e.g. "+", "-", "*", "/", "%")
 *
 * Return: pointer to the matching function, or NULL if none match
 *
 * Allowed: up to 3 ifs, no loops, no switch, no goto, no else
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

	/* simply walk the small ops[] table by indexing */
	if (s && s[0])
	{
		if (s[0] == '+' && s[1] == '\0')
			return (op_add);
		if (s[0] == '-' && s[1] == '\0')
			return (op_sub);
		if (s[0] == '*' && s[1] == '\0')
			return (op_mul);
		if (s[0] == '/' && s[1] == '\0')
			return (op_div);
		if (s[0] == '%' && s[1] == '\0')
			return (op_mod);
	}

	return (NULL);
}
