/*
 ============================================================================
 Name        : EX1.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer you want to check ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	((x%2)==0)?printf("%d is even",x):printf("%d is odd",x);
	/*if(x % 2 == 0)

		printf("%d is even",x);

	else
		printf("%d is odd",x);
*/
}
