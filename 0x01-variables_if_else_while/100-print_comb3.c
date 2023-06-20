#include <stdio.h>
/**
  * main - main entry
  * Return: 0 success
  * description: printing combination
  */
int main(void)
{
	int b;
	int f;

	for (b = 0; b < 9; b++)
	{
		for (f = b + 1; f <= 9; f++)
		{
			putchar(b + '0');
			putchar(f + '0');
			if (b != 8 || f != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
