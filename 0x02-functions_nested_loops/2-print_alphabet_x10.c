#include "main.h"
/**
  * void print_alphabet_x10 - print alphabet 10x
  *Return- always 0
  *
  */
void print_alphabet_x10(void);
{
/* declaring a variable */
	int g;
	char b;

	for (g = 1; g <= 10; g++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
