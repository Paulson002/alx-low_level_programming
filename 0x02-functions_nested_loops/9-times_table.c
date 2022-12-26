#include "main.h"
#include <stdio.h>

/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
for (int i = 0; i <= 9; i++)
{
printf("%d x 9 = %d\n", i, i * 9);
}
}

int main(void)
{
times_table();
return (0);
}

