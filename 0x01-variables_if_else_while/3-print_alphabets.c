#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase then in uppercase
 *
 * Return: show alphabet in lowercase then uppercase
 */

int main(void)
{
/*
 * @x: alphabet in small case
 * @y: alphabet in uppercase
 */
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
char y = 'A';
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
