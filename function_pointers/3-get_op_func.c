#include "3-calc.h"

/**
* get_op_func - select the correct operation function based on s
* @s: the operator string (must be '+', '-', '/' , '*' or '%')
* Return: pointer to the matching funtion , or NULL if invalid 
* Constranints no loops , no switch , no goto , max 3 if statements
*/

int (*get_op_func(char *s))(int, int)
{
    /* single if to verify s is exactly one character */
    if (s == NULL || s[0] =='\0' || s[1]!='\0')
    return (NULL);

    /* cascade of conditional operators to pick the right function*/
    return (s[0]== '+' ? op_add :
    s[0]== '-' ? op_sub :
    s[0] == '*'? op_mul :
    s[0] == '/' ? op_div :
    s[0]== '%' ? op_mod :
    NULL);
}