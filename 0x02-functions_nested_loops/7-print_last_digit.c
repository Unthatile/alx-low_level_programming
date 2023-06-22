#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int num) {
int digit = num % 10;
printf("The last digit of %d is %d\n", num, digit);
return digit;
}
