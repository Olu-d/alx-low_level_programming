#include<stdlib.h>
#include"dog.h"

/**
 * new_dog - initializing a new variable with type dog_t
 * @name: member of new_dog
 * @age: member
 * @owner: member
 * Return: pointer to new variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *inscope_dog;

	inscope_dog = malloc(sizeof(dog_t));
	if (inscope_dog == NULL)
		return (NULL);

	inscope_dog->name = name;
	inscope_dog->age = age;
	inscope_dog->owner = owner;

	return (inscope_dog);
}

