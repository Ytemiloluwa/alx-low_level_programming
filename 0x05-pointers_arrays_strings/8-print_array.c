#include <stdio.h>
#include "main.h"

/**
 * print_array - print array nums
 * @a: array pointer
 * @n: number of array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 < n)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");

}
