#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int a;
int count;

count = 0;
while (count < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
 count++;
_putchar('\n');
}
