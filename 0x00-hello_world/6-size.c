#include <stdio.h>
/**
  * main - main entry
  *
  * Return: 0 success
  */
int main(void)
{
/* calling variables */
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
