#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of random number
 * Description: using the main function
 * this program pints the last digit of aa random number
 * Return: 0
 */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, p);
	}
	else
	{
		 printf("last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}



