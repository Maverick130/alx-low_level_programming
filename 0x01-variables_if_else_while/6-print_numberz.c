#include <stdio.h>
/**
 * main - main entry
 * Return: 0 success
 */
int main(void)
{
/* declaring a variable */
	int f;

	for (f = 0; f < 10; f++)
	{
		putchar(f + '0');
	}
	putchar('\n');
	return (0);
}
