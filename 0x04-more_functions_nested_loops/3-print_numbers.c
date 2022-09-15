#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int numbers;

     for (numbers = 0; numbers <= 9; numbers++)
     { 
          _putchar((numbers % 10) + '0');
          _putchar('\n');
     }
}
