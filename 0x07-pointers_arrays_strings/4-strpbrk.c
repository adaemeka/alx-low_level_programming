#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be searched
 * @accept: Bytes to be sesarched for
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}

