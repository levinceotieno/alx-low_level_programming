#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog credentials
 * @name: the Name _MEMBER
 * @age: the Age _MEMBER
 * @owner: its Owner _MEMBER
 * Description: Details are for dog (struct)
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - type Definition for the struct
 */

typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
