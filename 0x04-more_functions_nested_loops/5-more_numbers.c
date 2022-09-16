#include "main.h"

/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 48, j = 48, a, b;

	for (b = 0; b < 10; b++)
	{
		while (j < 53)
		{
			if (i <= 57)
				a = i++;
			else
				a = 49;
			_putchar(a);

			if (i == 58 && a == 49)
				_putchar(j++);
		}
		i = 48, j = 48;
		_putchar('\n');
	}
}
