#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 to 9.
 * @c: Character to be checked
 * Return: 1 if its digit, 0 for anything else
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
else
{
return (0);
}
}
