#include <stdio.h>

/**
* main - prints all sigle digit numbers
* Description: Base 10 starting 0
*
* Return: Always 0
*/

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar ('\n');

return (0);
}
