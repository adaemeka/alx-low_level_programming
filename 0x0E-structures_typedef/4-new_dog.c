#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Length of a string.
 * @str: String to be measured.
 * Return: Length of the string.
 */

int _strlen(char *str)
{
int len = 0;

while (str[len] != '\0')
{
len++;
}
return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: Where the string is copied to
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
int i = 0;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptnew_dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

ptnew_dog = malloc(sizeof(dog_t));

if (ptnew_dog == NULL)
return (NULL);

ptnew_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

if (ptnew_dog->name == NULL)
{
free(ptnew_dog);
return (NULL);
}

ptnew_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

if (ptnew_dog->owner == NULL)
{
free(ptnew_dog->name);
free(ptnew_dog);
return (NULL);
}

ptnew_dog->name = _strcopy(ptnew_dog->name, name);
ptnew_dog->age = age;
ptnew_dog->owner = _strcopy(ptnew_dog->owner, owner);

return (ptnew_dog);
}
