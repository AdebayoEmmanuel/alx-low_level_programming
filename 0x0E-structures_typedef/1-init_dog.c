#include <stdio.h>
#include "dog.h"
/**
* init_dog - a function that initializes a variable of type struct dog
* @d: new dog struct
* @name: name parameter for the new dog struct
* @age: age parameter for the new dog struct
* @owner: owner parameter for the new dog struct
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
