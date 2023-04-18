#ifndef _DOG_H
#define _DOG_H

/*
 * struct dog - will collect dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_p - typedef for struct dog
 */

typedef struct dog dog_p;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_p *new_dog(char *name, float age, char *owner);
void free_dog(dog_p *d);

#endif
