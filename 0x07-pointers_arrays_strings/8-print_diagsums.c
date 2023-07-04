#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals
 *
 * @a: variable
 * @sisizee: variable
 * Return: null
 */
void print_diagsums(int *a, int size)
{
	 int i;
	 int sum1 = 0;
	 int sum2 = 0;

	 for (i = 0; i < size; i++)
	 {
		 sum1 += *(a + i * size + i);
		 sum2 += *(a + i * size + (size - i - 1));

		 _putchar("%d, %d\n", sum1, sum2);
	 }
}
