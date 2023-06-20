#include <stdio.h>
/**
  * main - main entry
  * Return: 0 success
  *
  */
int main(void)
{
	int akua;
	int jess;
	int kofi;

	for (akua = 0; akua < 8; akua++)
	{
		for (jess = akua + 1; jess < 9; jess++)
		{
			for (kofi = jess + 1; kofi <= 9; kofi++)
			{
				putchar(akua + '0');
				putchar(jess + '0');
				putchar(kofi + '0');
				if (akua != 7 || jess != 8 || kofi != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
