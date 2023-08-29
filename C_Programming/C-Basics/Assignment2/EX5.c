/*
 ============================================================================
 Name        : EX5.c
 Author      : OMAR AYMAN
 Version     : Version 1
 Description : C Basics, ANSI-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter character ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&& x<='z')||(x>='A'&& x<='Z'))
		printf("%c is alphabet",x);
	else
		printf("%c is not alphabet",x);

}
