#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees a 2d grid
* @grid: 2d grid
* @height: Height dimension of grid
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
