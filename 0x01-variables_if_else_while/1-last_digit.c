#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point for the program
 * Return: 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastD

srand(time(0));
n = rand() - RAND_MAX / 2;
lastD = n % 10;

/* your code goes there */
if (lastD > 5)
printf("Last digit of %d is %d  and is greater than 5\n", n, lastD);
if (lastD == 0)
printf("Last digit of %d is %d and is 0\n", n, lastD);
if (lastD < 6 && lastD != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
else
return (1);
return (0);
}
