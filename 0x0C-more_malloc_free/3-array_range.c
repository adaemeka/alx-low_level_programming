#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: A pointer to the newly created array.
 */

int *array_range(int min, int max)
{
int *ptr_ar;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr_ar = malloc(sizeof(int) * size);

if (ptr_ar == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr_ar[i] = min++;

return (ptr_ar);
}
