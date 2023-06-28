#include "main.h"
/**
  * puts2 - prints the a string starting from the first character
  *
  * @str: string character
  * Return: 0 success
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
