#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers,
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print_num;
unsigned int i;

va_start(print_num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(print_num, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(print_num);
}
