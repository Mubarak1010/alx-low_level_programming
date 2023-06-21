#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>

int _putchar(char c);
void print_dog(struct dog *d);

/**
 * struct dog - Short description
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
