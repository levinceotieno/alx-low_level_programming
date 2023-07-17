#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this Function frees memory that was allocated
 * @d: the POinter to the freed mem
 * Return: nothing
 */
void free_dog(dog_t *d)
{

if (d)
{
free(d->name);
free(d->owner);
free(d);
}

}
