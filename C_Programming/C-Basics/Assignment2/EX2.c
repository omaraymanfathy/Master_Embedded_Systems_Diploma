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
	char x;
	printf("Enter an alphabet ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	{
		printf("%c is a vowel",x);
	}
	break;

	default:
	{
		printf("%c is a alphabet",x);
	}
	}

}

