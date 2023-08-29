/*
 ============================================================================
 Name        : EX5.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Copyright   : Your copyright notice
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	printf("Enter Value of a ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &a);
	printf("Enter Value of b ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swapping, value of a = %f \nAfter Swapping, value of b = %f", a, b);
}
