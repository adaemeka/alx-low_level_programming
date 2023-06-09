#include "main.h"

int check_palin(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to reverse
* Return: 1 if it is, 0 it's not
*/

int is_palindrome(char *s)
{

if (*s == 0)
{
return (1);
}
else
{
return (check_palin(s, 0, _strlen_recursion(s)));
}
}

/**
* _strlen_recursion - Finds the length of a string
* @s: The string to find its length.
* Return: length of the string
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}


/**
* check_palin - Checks the characters recursively for palindrome
* @s: String to check
* @i: Iterator
* @e: Length of the string
* Return: 1 if palindrome, 0 if not
*/

int check_palin(char *s, int i, int e)
{

if (*(s + i) != *(s + e - 1))
{
return (0);
}
else if (i >= e)
{
return (1);
}
else
{
return (check_palin(s, i + 1, e - 1));
}
}

