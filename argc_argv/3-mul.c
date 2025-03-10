#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point, multiplies two numbers
* @argc: Argument count
* @argv: Argument vector (array of strings)
*
* Return: 0 if successful, 1 if incorrect number of arguments
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]); /* Convert first argument to an int */
num2 = atoi(argv[2]); /* Convert second argument to an int */
result = num1 * num2;

printf("%d\n", result);

return (0);
}
