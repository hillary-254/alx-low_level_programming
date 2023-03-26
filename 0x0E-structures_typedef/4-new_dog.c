#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - ...
 *@name: ...
 *@age: ...
 *@owner: ...
 *Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;

	myDog = malloc(sizeof(dog_t));
	if (myDog == NULL)
		return (NULL);

	myDog->name = malloc(strlen(name) + 1);
	myDog->owner = malloc(strlen(owner) + 1);
	if (myDog->name == NULL || myDog->owner == NULL)
	{
		free(myDog->name);
		free(myDog->owner);
		free(myDog);
		return (NULL);
	}
	strcpy(myDog->name, name);
	myDog->age = age;
	strcpy(myDog->owner, owner);
	return (myDog);
}
