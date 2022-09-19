#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The string
 */

void _puts(char *str)
{
	int i;
	char ch;

	i = 0;
	while (str[i] != '\0')
	{
		ch = str[i];
		_putchar(ch);
		++i;
	}
	_putchar('\n');
}
