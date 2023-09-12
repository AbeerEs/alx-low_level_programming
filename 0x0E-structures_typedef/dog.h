#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct dog
 *@name: input parameter
 *@age: input parameter
 *@owner: input parameter
 *Description: new type struct dog with the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
