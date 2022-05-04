#ifndef dog_h
#define dog_h
/**
* struct dog - a dog structure, with some attributes
*
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Description: This struct is the solution to 0. Poppy task
*
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
