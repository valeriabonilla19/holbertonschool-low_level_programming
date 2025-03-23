#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Performs simple arithmetic operations
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success, exits with status codes on error
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);

if (!operation)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
