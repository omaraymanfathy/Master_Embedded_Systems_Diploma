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
	int n,i,product=1;
	printf("Enter an integer ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n==0)
		printf("Factorial = 1");
	else if(n<0)
		printf("ERORR!!! Factorial of negative number doesn't exist");
	else
	{

		for(i=1;i<=n;i++)
		{
			product*=i;
		}
		printf("sum = %d",product);
	}

}
