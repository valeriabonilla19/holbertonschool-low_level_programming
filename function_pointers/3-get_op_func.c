#include "3-calc.h"
#include <stddef.h>

/**
* get_op_func - Selects the correct function to perform thr operation
* @s: The operator passes as argument
* Return: Pointer to the function corresponding to the operator
*/

int (*get_op_func(char *s))(int,int)
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

while (ops[i].op != NULL && *s != *(ops[i].op))
i++;

return (ops[i].f);
}
