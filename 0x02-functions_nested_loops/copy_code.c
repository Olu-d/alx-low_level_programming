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
    int n = -1024, lastDigit;
    lastDigit = (n*-1) % 10;
    printf("last digit = %d\n\n", lastDigit);
    _putchar('0' + lastDigit);
    return 0;
}
