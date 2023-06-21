#include "main.h"
/**
  * _isalpha: main functionof the code and it return 1 when lowercase and 0 for the others
  *
  * @c: the character in ASCII code
  * Return: 1 for lowercase or 0 for the others
  *
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
