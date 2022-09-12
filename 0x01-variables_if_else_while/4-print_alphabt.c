#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets except e and q
 *
 * Return: Alphabets except e and q
 */

int main(void)
{

 /**
  * @c: char type with value a
  */

char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
if (c == 'e' || c == 'q')
{
c++;
}
}
putchar('\n');
return (0);
}
