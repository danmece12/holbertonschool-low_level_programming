#ifndef CALC_H
#define CALC_H

#include <stddef.h>  /* if you use size_t anywhere */

/**
 * struct op - operator and its function
 * @op:  operator string ("+", "-", "*", "/", "%")
 * @f:   the function that implements it
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/* Operation prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* get_op_func prototype only */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
