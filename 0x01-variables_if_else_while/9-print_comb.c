#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combinations of single-digit numbers
 *
 * Return: single-digit number seperated by , and follower by
 * a space
 *
 */

int main(void)
{
  /**
   * @x: integer with value of 0
   */
int x = 0;
while (x < 10)
{
putchar((x % 10) + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
