#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything based on the format specified
* @format: list of types of arguments passed to the function
* 
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char c;
int d;
float f;
char *s;
int printed = 0;

va_start(args, format);

while (format && format[i] != '\0')
{
if (printed)
printf(", ");

switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
d = va_arg(args, int);
printf("%d", d);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}

printed = 1;
i++;
}

printf("\n");
va_end(args);
}
