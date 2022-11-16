#ifndef FIRST_STRUCT
#define FIRST_STRUCT

/**
 * struct dog - define elements for main
 * @name: Name of member
 * @age: Age of member
 * @owner: Owner of member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* ifndef FIRST_STRUCT */
