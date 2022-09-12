#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: reverse lowercase alphabet in stdout
 */

int main(void)
{
  /**
   * @x: character type with value of z
   */

char x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
