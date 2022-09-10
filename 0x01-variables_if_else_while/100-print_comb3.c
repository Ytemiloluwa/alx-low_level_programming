#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display double digits and ,
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = i % 10;
		k = i / 10;
		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}

