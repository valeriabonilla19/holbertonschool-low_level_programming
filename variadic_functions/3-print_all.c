#include <stdarg.h>
#include <stdio.h>

/**
* print_char - Prints a char.
* @args: The list of arguments.
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* print_int - Prints an integer.
* @args: The list of arguments.
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_float - Prints a float.
* @args: The list of arguments.
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* print_string - Prints a string.
* @args: The list of arguments.
*/
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}

/**
* print_all - Prints anything based on the given format.
* @format: A list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *separator = "";
/* Struct to map format specifiers to functions */
/**
* struct printer - Maps format specifiers to corresponding functions.
* @spec: The format specifier character (e.g., 'c', 'i', 'f', 's').
* @func: The function that corresponds to the format specifier.
*/
struct printer
{
char spec;
void (*func)(va_list);
} funcs[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (funcs[j].spec)
{
if (format[i] == funcs[j].spec)
{
printf("%s", separator);
funcs[j].func(args);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
