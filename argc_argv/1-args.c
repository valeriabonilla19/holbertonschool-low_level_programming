#include <stdio.h>

/**
* main - Entry point, prints the number of arguments passed
* @argc: Argument count
* @argv: Argument vector (array of strings)
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argv; /* Suppress unused variable warning */
printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name */

return (0);
}
