/*
 ============================================================================
 Name        : EX3.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Copyright   : Your copyright notice
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,sum;
	printf("Enter two integers ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("Sum = %d",sum);
}
