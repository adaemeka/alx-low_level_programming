#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area to be stored
 *@src: memory area to be copied
 *@n: number of copies
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;

for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}

