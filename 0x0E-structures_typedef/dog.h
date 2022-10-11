#ifdef DOG_H
#define DOG_H
/**
 * struct dog-> the struture of our project
 * @name: stores the dog name
 * @age: stores the dog age
 * @owner: stores the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
