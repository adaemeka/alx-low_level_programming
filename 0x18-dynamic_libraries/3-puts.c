#include "main.h"
/**
 * _puts - Prints a string, in reverse, followed by a new line.
 * @str: Input string.
 * Return: 0.
 */
void _puts(char *str)
{
int i = 0;

while (i >= 0)
{
if (str[i] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[i]);
i++;
}
}
