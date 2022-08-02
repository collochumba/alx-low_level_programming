#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints the dog details
 * @d: details of the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d.name == NULL)
		{
			printf("Name: (nil)\n", d.name);
		}
		else if (d.age == NULL)
		{
			printf("Age: (nil)\n", d.age);
		}
		else if (d.owner == NULL)
		{
			printf("Owner: (nil)\n", d.owner);
		}
	}
	else
	{
		printf("nothing\n", *d);
	}
}
