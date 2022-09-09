#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
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

