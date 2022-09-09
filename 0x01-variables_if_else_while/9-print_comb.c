#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display 0-9 and ,
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
