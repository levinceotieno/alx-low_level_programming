#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @owner: the owner
 * @d: POINTER to struct dog
 * @age: the age
 * @name: the name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));
d->owner = owner;
d->age = age;
d->name = name;
}
