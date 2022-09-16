#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int x = 0;

	for (x = 0; x < n; ++x)
  { 
    _putchar('_');
  }
	_putchar('\n');
}
