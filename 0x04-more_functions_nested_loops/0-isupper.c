#include "main.h"
/**
 * _isupper - prints uppercase letter
 *
 * @c: it checks the code
 *
 * Return: 0 success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
