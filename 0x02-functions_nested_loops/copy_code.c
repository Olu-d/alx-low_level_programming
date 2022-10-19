#include<stdio.h>
#include"main.h"

/**
  * print_last_digit - This function returns last digit of a number
  * @n: Input number
  * Return: No main, so no return statement.
  *
 */
int main()
{
    int INT_MIN;
    int n = INT_MIN, lastDigit;
    lastDigit = n % 10;
    printf("last digit = %d\n\n", lastDigit);
    _putchar('0' + lastDigit);
    return 0;
}
