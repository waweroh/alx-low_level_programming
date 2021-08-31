#include "main.h"
/**
 *main - entry point
 *write a program that prints holberton
 *return 0 on success
 */
int main(void)
{
char name[] = "_putchar";
int i;

i = 0;
while (name[i] != '\0')
{
      
_putchar(name[i]);
i++;
      
}
_putchar('\n');
return (0);
}    
  
