#include "main.h"
/**
  * _isalpha - cheaks for alphabetic character
  *
  * Return: o success
  *
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 95 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
