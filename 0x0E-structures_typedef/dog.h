#ifndef DOG_H
#define DOG_H

/**
* struct dog - Defining a type of structue dog.
* @name: First member variable
* @age: Second member variable
* @owner: Third member variable
*
* Description: Defining a type of structue dog.
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
