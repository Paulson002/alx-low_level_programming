#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: character to check lowercase letters
 * Return: (1) if c is lowercase, (0) if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
