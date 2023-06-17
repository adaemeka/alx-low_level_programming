#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: A pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr_real;
char *ptr_old;
char *ptr_new;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
ptr_real = malloc(new_size);

if (ptr_real == NULL)
return (NULL);
return (ptr_real);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr_old = ptr;
ptr_real = malloc(sizeof(*ptr_old) * new_size);

if (ptr_real == NULL)
{
free(ptr);
return (NULL);
}

ptr_new = ptr_real;

for (i = 0; i < old_size && i < new_size; i++)
ptr_new[i] = *ptr_old++;

free(ptr);
return (ptr_real);
}
