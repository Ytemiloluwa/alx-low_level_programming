#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: The string
 */

void print_rev(char *s)
{
	int i;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	--i;

	while (i >= 0)
	{
		ch = s[i];
		_putchar(ch);
		--i;
	}
	_putchar('\n');
}
