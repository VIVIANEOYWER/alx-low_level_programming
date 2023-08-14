#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n
 * and prints whether it is negative, positive or zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("The number %d is ", n);
if (n > 0)
printf("%d is positive/n");
else if (n == 0)
printf("%d is zero/n");
else
printf("%d is negative/n");
return (0);
}
