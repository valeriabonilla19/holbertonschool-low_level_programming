#include "3-calc.h"
#include <stddef.h>

/**
* get_op_func - Selects the correct function to perform the operation
* @s: The operator passed as argument
* Return: Pointer to the function corresponding to the operator, or NULL if invalid
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

/* Ensure s is exactly one character long */
if (s == NULL || s[1] != '\0')
return (NULL);

while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
return (ops[i].f);
i++;
}

return (NULL);
}
