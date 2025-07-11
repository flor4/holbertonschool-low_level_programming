#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - information about.
 *
 * @name: name of.
 * @age : age of.
 * @owner: owner of.
 *
 *
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
char *copy_string(const char *str);
#endif
