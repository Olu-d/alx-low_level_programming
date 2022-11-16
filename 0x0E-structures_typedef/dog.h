#ifndef FIRST_STRUCT
#define FIRST_STRUCT

/**
 * struct dog - define elements for main
 * @name: Name of member
 * @age: Age of member
 * @owner: Owner of member
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* ifndef FIRST_STRUCT */
