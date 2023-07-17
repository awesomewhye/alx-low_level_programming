#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints a dog identity
  * @d: a pointer to the dog name,age and owner
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nii)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nii)");
	}
}
