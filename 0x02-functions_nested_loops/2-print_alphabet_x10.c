#include "main.h"
/**
  * void print_alphabet_x10 - print alphabet 10x
  *Return- always 0
  *
  */
void print_alphabet_x10(void);
/* declaring a variable */
	int g;
	int b;

	for (g = 1; b <= 10; b++)
	{
		for (g = '97'; g <= '122'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
	}
}
