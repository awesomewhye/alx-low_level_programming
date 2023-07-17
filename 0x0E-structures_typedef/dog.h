#ifndef DOG_H
#define DOG_H

/**
  * struct dog - defining a new type
  * @name: dogs name
  * @age: dogs age
  * @owner: owners age
  *
  * Description: a poppy
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
