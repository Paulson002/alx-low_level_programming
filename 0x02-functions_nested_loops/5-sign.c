#include <stdio.h>
#include "main.h"

/**
*print_sign - print sign of number
* @n: number to check
* main - prints the signs of numbers
* Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
int main(void)
{
if (n > 0)
{
putchar('+');
return (1);
}

else if (n == 0)
{
putchar('0');
return (0);
}

else
{
putchar('-');
return (-1);
}
}
}
