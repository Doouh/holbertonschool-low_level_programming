#ifndef de
#define de
/**
 * struct dog - Short description
 * @name: asdasd
 * @age: asdasd
 * @owner: asdasd
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
