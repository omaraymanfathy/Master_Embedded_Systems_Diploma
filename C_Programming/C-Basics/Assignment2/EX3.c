/*
 ============================================================================
 Name        : EX2.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter three numbers ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
			printf("Largest number = %f",x);
		else
			printf("largest number = %f",z);
	}
	else if (y>z)
	{
		printf("Largest number = %f",y);

	}
	else
		printf("Largest number = %f",z);

}
