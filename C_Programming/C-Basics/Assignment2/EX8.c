/*
 ============================================================================
 Name        : EX7.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
	char c;
	printf("Enter operator either + or - or * or divide ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(c)
	{
	case '+':
	{
		printf("%f + %f = %f ",num1,num2,num1+num2);
	}
	break;
	case '-':
	{
		printf("%f - %f = %f ",num1,num2,num1-num2);
	}
	break;
	case '*':
	{
		printf("%f * %f = %f ",num1,num2,num1*num2);
	}
	break;
	case '/':
	{
		printf("%f / %f = %f ",num1,num2,num1/num2);
	}
	break;
	default:
	{
		printf("wrong operator");
	}






	}
}
