#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 * followed by a new line.
 *
 *Return: Always 0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar (ch);
ch++;
}
putchar('\n');
return (0);
}
