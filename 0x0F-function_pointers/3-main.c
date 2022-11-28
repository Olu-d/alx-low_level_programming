#include<stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, result;

	/*validate input*/
	if (argc < 2 || argc > 2)
		printf("Error\n");
		exit(98);

	/*if operator isn't in +*-/% return error*/
	if (argv[1] != '+' || argv[1] != '*' || argv[1] != '-' || argv[1] != '/'|| argv[1] != '%')
		printf("Error\n");
		exit(99);


	/*if user tries to divide by 0, print error*/
	if ((argv[1] == '%' || argv[1] == '/') && argv[2] == 0)
		printf("Error\n");
		exit(100);

	/*convert input*/
	num1 = atoi(argv[0]);
	num2 = atoi(argv[2]);


	/*result = function to call;*/

	/*print result*/
	printf("");


}

