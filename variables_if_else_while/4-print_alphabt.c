#include <stdio.h>

/**
* main - print the alphabet in lowercase
* Description: Without the letter e and q
* Return: Always 0
*/

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar (ch);
}
}
putchar ('\n');
return (0);
}
