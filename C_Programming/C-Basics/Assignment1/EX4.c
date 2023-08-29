/*
 ============================================================================
 Name        : EX4.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Copyright   : Your copyright notice
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,product;
	printf("Enter two integers ");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&x,&y);
	product = x*y;
	printf("Product = %f",product);
}
