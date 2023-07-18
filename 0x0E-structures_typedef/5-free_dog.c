#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - freeing memry allocatd for a struct dog
 * @d: a ptr to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
