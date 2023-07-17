#include <stdlib.h>
#include "dog.h"
/**
 * _copy - copying the PASSED arg
 * @src: details to be copied
 * Return: PTR
 */
char *_copy(char *src)
{
int a, lngth;
char *pointer;
if (src == NULL)
{

return (NULL);
}
for (lngth = 0; src[lngth] != '\0'; lngth++)
;
pointer = malloc(sizeof(char) * (lngth + 1));

if (pointer == NULL)
{
return (NULL);
}
for (a = 0; src[a] != '\0'; a++)
{
pointer[a] = src[a];
}
pointer[a] = '\0';
return (pointer);
}
/**
 * new_dog - Create a new dog variable
 * @name: Dogs Nameee
 * @age: dogs agee
 * @owner: dogs owneer
 * Return: PTR
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *_new_name, *_nieew_owner;
dog_t *simba;

if (name == NULL || owner == NULL)
{
return (NULL);
}
simba = malloc(sizeof(dog_t));
if (simba == NULL)
{

return (NULL);
}
_new_name = _copy(name);
if (_new_name == NULL)
{
free(simba);
return (NULL);
}
(*simba).name = _new_name;

(*simba).age = age;

_nieew_owner = _copy(owner);
if (_nieew_owner == NULL)
{
free((*simba).name);
free(simba);
return (NULL);
}
(*simba).owner = _nieew_owner;

return (simba);
}
