#include "main.h"
/**
 *_abs - Computes the absolute value of an integer.
 *@c: the integer to be computed.
 *Return: Returns the absolute value.
 */

int _abs(int c)
{
int n = c;
int absvalue;
if (n < 0)
{
n = n * (-1);
}
absvalue = n;
return (absvalue);
}
