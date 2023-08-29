/*
 ============================================================================
 Name        : EX6.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum=0;
	printf("Enter an integer ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
}
