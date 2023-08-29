/*
 ============================================================================
 Name        : EX4.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	printf("Enter number ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	if(x>=0)
	{
		if(x==0)
			printf("you entered zero");
		else
			printf("%f is positive",x);

	}
	else
		printf("%f is negative",x);
}
