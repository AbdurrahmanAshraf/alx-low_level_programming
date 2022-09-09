#include <stdlib.h>
#include <time.h>
/**
 * main - print the number is positive or negative
 *
 * @n: random number
 *
 * The if statment checks whether the number is positive or
 * negative and execute display according to that
 *
 * Return: The number is positive or negative or zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(n, "is positive\n");
}
else if (n < 0)
{
printf(n, "is negative\n");
}
else
{
printf(n, "is zero\n");
}
return (0);
}
