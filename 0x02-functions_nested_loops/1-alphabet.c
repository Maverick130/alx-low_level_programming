#include "main.h"
/**
  * main - main entry
  * discription: function to print alphabet
  * Return: 0
  */
void print_alphabet(void)
{
	char lettter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
