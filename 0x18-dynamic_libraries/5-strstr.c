#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: String to be searched
 * @needle: Substring to be located
 * Return: Pointer to the beginning of the located substring,
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (0);
}

