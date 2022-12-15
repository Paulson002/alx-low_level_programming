#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lower case
 * followed by a new line
 * Return: 0(sucess)
 */

void print_alphabet_x10(void)
{

	char letter = 'a';

	int num = 1;

	while (num < 11)
	{
		while (letter <= 'z')
		{
		putchar(letter);
		letter++
;		}
	putchar('\n');
	letter = 'a';
	num++;
;	}
}



