#ifndef dog_h
#define dog_h


/**
* struct dog - struct prototype
* @name: dog's name
* @owner: owner's name
* @age: dog's age
*
* Description: a dog data type
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
