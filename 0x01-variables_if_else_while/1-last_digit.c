#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - main entry
  * Return: 0 success
  */
int main(void)
{
/* declarin variable*/
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than6 and not 0\n", n, last_digit);
	}

	return (0);
}