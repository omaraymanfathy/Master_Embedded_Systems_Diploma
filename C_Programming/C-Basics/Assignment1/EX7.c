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
	float a,b;
	printf("Enter Value of a ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &a);
	printf("Enter Value of b ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &b);
	a+=b;
	b=a-b;
	a=a-b;
	printf("After Swapping, value of a = %f \nAfter Swapping, value of b = %f", a, b);
}
