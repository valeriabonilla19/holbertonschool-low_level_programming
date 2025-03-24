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
char *s;
int printed = 0;

va_start(args, format);

while (format && format[i] != '\0')
{
if (printed)
printf(", ");

if (format[i] == 'c')
printf("%c", va_arg(args, int));
if (format[i] == 'i')
printf("%d", va_arg(args, int));
if (format[i] == 'f')
printf("%f", va_arg(args, double));
if (format[i] == 's')
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}

printed = 1;
i++;
}

printf("\n");
va_end(args);
}
