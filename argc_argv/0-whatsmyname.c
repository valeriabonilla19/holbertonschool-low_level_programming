#include <stdio.h>

/**
 * main - Entry point, prints the program's name
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc; /* Suppress unused variable warning */
    printf("%s\n", argv[0]);

    return (0);
}
