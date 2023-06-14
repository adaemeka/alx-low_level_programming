#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a
* 2 dimensional array of integers.
* @width: Width value
* @height: Height value
* Return: Pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
int **soc;
int c, d;

if (width <= 0 || height <= 0)
return (NULL);

soc = malloc(sizeof(int *) * height);

if (soc == NULL)
return (NULL);

for (c = 0; c < height; c++)
{
soc[c] = malloc(sizeof(int) * width);

if (soc[c] == NULL)
{
for (; c >= 0; c--)
free(soc[c]);
free(soc);
return (NULL);
}
}

for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
soc[c][d] = 0;
}
return (soc);
}
