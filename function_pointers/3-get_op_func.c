#include "3-calc.h"

/**
 * get_op_func - select the correct operation function based on s[0]
 * @s: the operator string (must be exactly "+", "-", "*", "/", or "%")
 *
 * Return: pointer to the matching function, or NULL if none match
 * Allowed: 1 if, no loops, no switch, no else, no goto
 */
int (*get_op_func(char *s))(int, int)
{
if (s == NULL || s[0] == '\0' || s[1] != '\0')
return (NULL);
return (s[0] == '+' ? op_add  :
s[0] == '-' ? op_sub  :
s[0] == '*' ? op_mul  :
s[0] == '/' ? op_div  :
s[0] == '%' ? op_mod  :
NULL);
}
