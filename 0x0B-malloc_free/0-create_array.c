#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - creates array of char
 * @size: the size of array
 * @c: the first character
 *
 * Returns: NULL or a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *charray;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	charray = malloc(sizeof(char) * size);

	if (charray == NULL)
		return (NULL);

	while (i < size)
	{
		charray[i] = c;
		i++;
	}

	return (charray);
}
