#include "main.h"

/**
 * _strlen - a function that return the lenght of a string
 * @s: pointer to the string
 * Return: void
 */

int _strlen(char *s)
{
		int i = 0;
		while (s[i])
			i++;
		return (i);

}
