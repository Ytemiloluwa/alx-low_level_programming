#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 *
 * Task 2 
 */
int main(void)
{
     char lowercase;
     char UpperCase;

     for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

     for (UpperCase = 'A'; UpperCase <= 'Z'; UpperCase++)
          putchar(UpperCase);
     putchar('\n');

	return (0);
}
