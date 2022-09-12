#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the number is positive or negative
 *
 *
 * The if statment checks whether the number is positive or
 * negative and execute display according to that
 *
 * Return: The number is positive or negative or zero
 */
int main(void)
{
  /**
   *@n: random number to be printer
   */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
