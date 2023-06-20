#include "main.h"
/**
  * main - main entry
  * discription: function to print alphabet
  * Return: 0
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
