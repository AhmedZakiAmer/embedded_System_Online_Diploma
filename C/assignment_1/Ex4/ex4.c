/*
 * ex4.c
 *
 *  Created on: Jan 14, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void) {
	float num1;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num1);
	if (num1 > 0) {
		printf("%.2f is positive.", num1);
	} else if (num1 < 0) {
		printf("%.2f is negative.", num1);
	} else {
		printf("you entered %d",num1);
	}


	return 0;
}
