#include "main.h"
#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of the program
* @ac: int input
* @av: double pointer array
* Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
int i, m, n, q;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (m = 0; av[i][m]; m++)
q++;
q++;
}

str = malloc(sizeof(char) * q + 1);

if (str == NULL)
return (NULL);

n = 0;

for (i = 0; i < ac; i++)
{

for (m = 0; av[i][m] != '\0'; m++)
{
str[n] = av[i][m];
n++;
}
str[n] = '\n';
n++;
}
return (str);
}
