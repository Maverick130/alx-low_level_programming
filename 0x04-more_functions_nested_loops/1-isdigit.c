#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: the variable to be checked
 * Return: return 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
