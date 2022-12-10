#include <stdio.h>
/**
 * main - print alphabet i lower and then in upper case
 * Description: using the main function
 * this program pints the last digit of aa random number
 * Return: 0
 */
int main(void)

{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

