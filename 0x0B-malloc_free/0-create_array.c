#include "main.h"
#include <stdlib.h>

/**
* create_array - Create an array of char and
* initialize it with a specific char
* @size: Size of array
* @a: Char to assign.
* Return: Pointer to array, NULL if it fails.
*/

char *create_array(unsigned int size, char a)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = a;
return (str);
}

