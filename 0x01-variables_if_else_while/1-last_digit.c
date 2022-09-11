#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main - prints the last digit
 *
 * The if statment checks the last digit of n
 * and print statement according to that
 *
 * Return: The statment according to if
 */

int main(void)
{

  /**
   * @n: The random number
   * @x: n % 10
   */

int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (x < 6 && !0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
