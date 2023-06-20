#include "main.h"
/**
  * main - main entry
  * discription: function to print alphabet
  * print_alphabet - print alphabet in lowercase
  */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
