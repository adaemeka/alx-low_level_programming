
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: Arguments passed to the function
 */

void print_all(const char * const format, ...)
{

va_list print_li;
int i = 0;
char *str, *seppp = "";

va_start(print_li, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", seppp, va_arg(print_li, int));
break;
case 'i':
printf("%s%d", seppp, va_arg(print_li, int));
break;
case 'f':
printf("%s%f", seppp, va_arg(print_li, double));
break;
case 's':
str = va_arg(print_li, char *);
if (!str)
str = "(nil)";
printf("%s%s", seppp, str);
break;
default:
i++;
continue;
}
seppp = ", ";
i++;
}
}

printf("\n");
va_end(print_li);
}
