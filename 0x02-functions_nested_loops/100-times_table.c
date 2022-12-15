#include "main.h" 
/**
 * print_times_table - Prints the times table of the input,
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int num, mult, prod;
	
	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
