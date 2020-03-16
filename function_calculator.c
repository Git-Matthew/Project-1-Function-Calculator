#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float add(float x, float y)
{
	return(x + y);
}

float subtract(float x, float y)
{
	return(x - y);
}

float multiply(float x, float y)
{
	return(x * y);
}

float divide(float x, float y)
{
	return(x / y);
}

int main(int argc, char ** argv)
{
	float num1=atof(argv[1]);
	float num2=atof(argv[3]);
	char symbol=argv[2][0];
	switch(symbol)
	{
		case '+':
			printf("Addition: %.2f \n", add(num1, num2));
			break;
		case '-':
			printf("Subtraction: %.2f \n", subtract(num1, num2));
			break;
		case 'x':
			printf("Multiplication: %.2f \n", multiply(num1, num2));
			break;
		case '/':
			printf("Division: %.2f \n", divide(num1, num2));
			break;
		default:
			printf("Syntax ERROR \n");
	}
	return (0);
}
