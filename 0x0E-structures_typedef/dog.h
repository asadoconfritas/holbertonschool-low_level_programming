#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - takes 3 pieces of data
 * @name: of the dog
 * @age: of the dog
 * @owner: name
 * Return: end program
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
