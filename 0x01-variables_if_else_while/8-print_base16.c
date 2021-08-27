#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*prints all the numbers of base 16 in lowercase
*Return: 0
*/
int main(void)
{
int d;
for (d = 0; d <= 15; d++)
putchar(d + '0');
putchar('\n');
return (0);
}
