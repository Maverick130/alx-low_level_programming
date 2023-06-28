#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: first variable
 * @n: second variable
 * Return: 0 sucess
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
}
