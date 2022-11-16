#include<stdlib.h>
#include<stdio.h>
#include"dog.h"

void print_dog(struct dog *d)
{
	/*validate input*/
	if (d == NULL)
		return;
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}	
      /* else if (d->age == NULL)*/
	/*{*/
		/*printf("(nil)");*/
		/*printf("Name: %s\n", d->name);*/
		/*printf("Owner: %s\n", d->owner);*/
	/*}*/
	else if (d->owner == NULL)
	{
		printf("(nil)");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
