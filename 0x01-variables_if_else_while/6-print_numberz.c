#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers from 0 to 9 using putchar
 *
 * Return: numbers form 0 to 9
 */

int main(void)
{
  /**
   * @x: integer type with value 0
   */
int x = 0;
while (x < 10)
{
putchar((x % 10) + '0');
x++;
}
putchar('\n');
return (0);
}
