#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int x, i;

	x = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++x;
		++i;
	}

	return (x);
}
