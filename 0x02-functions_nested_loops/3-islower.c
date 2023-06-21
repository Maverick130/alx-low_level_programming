#include "main.h"
/**
  * _islower: return 1 when lowercase and 0
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
