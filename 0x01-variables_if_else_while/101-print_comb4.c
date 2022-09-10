#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display triple digits and ,
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 1000)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 100; /* units */
		if (j < k && k < l)
		{
			putchar(l + '0');
			putchar(k + '0');
			putchar(j + '0');
			if (i < 789)
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
