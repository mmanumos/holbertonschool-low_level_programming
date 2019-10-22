#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct to save dogs
 *
 * @name: name's dog
 * @age:  age's dog
 * @owner: owner's dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
#endif
