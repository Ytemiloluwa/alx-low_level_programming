#include "main.h"

/**
 * print_alphabet - print all lowercase character
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);

	_putchar('\n');
}
