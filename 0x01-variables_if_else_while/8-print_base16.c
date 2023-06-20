#include <stdio.h>
/**
   * main - main entry
   * description: print all number of base 16
   * Return: 0 success
   */
int main(void)
{
/* declaring varieable */
	int g;

/* calling the for loop */
	for (g = 0; g < 16; g++)
	{
/* introducing if function */
		if (g < 10)
		{
			putchar(g + '0');
		}
		else
		{
			putchar(g - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
