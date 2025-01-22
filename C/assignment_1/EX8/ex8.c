/*
 * ex8.c
 *
 *  Created on: Jan 16, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	float num1,num2 ;
	char operator;
	printf("Enter operator either + or - or * or divide : ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%f %f", &num1,&num2);

	printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
	return 0;
}
