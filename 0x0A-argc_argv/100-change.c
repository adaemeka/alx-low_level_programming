#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
int naira, kobo = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

naira = atoi(argv[1]);

while (naira > 0)
{
kobo++;
if ((naira - 25) >= 0)
{
naira -= 25;
continue;
}
if ((naira - 10) >= 0)
{
naira -= 10;
continue;
}
if ((naira - 5) >= 0)
{
naira -= 5;
continue;
}
if ((naira - 2) >= 0)
{
naira -= 2;
continue;
}
naira--;
}
printf("%d\n", kobo);
return (0);
}
