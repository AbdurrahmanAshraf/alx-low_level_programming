#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: shows the alphabet in lowercase
 */

int main(void)
{
  /*
   * @c: char type with value of 'a'
   */
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
return (0);
}
