#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - THEfunct. returns the lngth
 * @s: STR *
 * Return: (lngth)
 */
int _strlen(char *s)
{

int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * *_strcpy - COPING THE str pointed plus the NULL byte (\0)
 * @dest: POinter to buffer that str is being copied
 * @src: str
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
int lngth;
int a;

lngth = 0;
while (src[lngth] != '\0')
{
lngth++;
}
for (a = 0; a < lngth; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Pointer to new dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int lngth_1;
int lngth_2;
dog_t *dog;

lngth_1 = _strlen(name);
lngth_2 = _strlen(owner);
dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (lngth_1 + 1));

if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (lngth_2 + 1));

if (dog->owner == NULL)
{
free(dog);
free(dog->name);

return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
