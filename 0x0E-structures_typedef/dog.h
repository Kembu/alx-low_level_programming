#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - dog's name age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
