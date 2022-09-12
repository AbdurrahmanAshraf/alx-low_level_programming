#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all numbers if base 16 in lowercase
 *
 * Return: numbers of base 16 in lowercase
 */

int main(void)
{
  /**
   * @x: integer type
   * @y: character type
   */
int x = 0;
char y = 'a';
while (x < 10)
{
putchar((x % 10) + '0');
x++;
}
while (y <= 'f')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
