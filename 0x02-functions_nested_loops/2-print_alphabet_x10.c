#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: void
 */
void print_alphabet_x10(void)
{
char n, k;
for (k = 0; k < 10; k++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}

