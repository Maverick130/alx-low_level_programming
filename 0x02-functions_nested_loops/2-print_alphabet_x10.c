#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10x
  *Return- always 0
  *
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
