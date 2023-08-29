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
	char x;
	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of '%c'= %d ",x,x);
}
