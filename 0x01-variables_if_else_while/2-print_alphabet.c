#include <stdio.h>
/**
 * main - print alphabets in lower case
 * Description: using the main function
 * this program pints alphabet in lower case
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
