#ifndef DOGH
#define DOGH
/**
 *struct dog - Struct dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog
dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
