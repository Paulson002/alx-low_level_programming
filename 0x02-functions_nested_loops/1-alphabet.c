#include <stdio.h>
#include "main.h"

/**
*print_alphabet - prints the alphabet, in lowercase, followed by a new line
* main - Prints the alphabts in small letters
* Rerurn: Always 0;
*/
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	putchar('\n');
}
