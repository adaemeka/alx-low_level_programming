#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  Allocates memory using malloc.
 * @b:  Size of memory in bytes to allocate.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
char *ptr_b;
ptr_b = malloc(b);
if (ptr_b == NULL)
exit(98);
return (ptr_b);
}
