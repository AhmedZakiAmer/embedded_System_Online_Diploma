/*
 * ex5.c
 *
 *  Created on: Jan 15, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void) {
	char alph ;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &alph);
	if ((alph >= 'A' && alph <= 'Z') || (alph >= 'a' && alph <= 'z')) {
		printf("%c is an alphabet", alph);
	} else {
		printf("%c is not an alphabet", alph);
	}


	return 0;
}
