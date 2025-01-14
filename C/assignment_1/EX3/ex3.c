/*
 * ex3.c
 *
 *  Created on: Jan 14, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	float num1, num2, num3, max;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &num1, &num2, &num3);
	max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}

	printf("Largest number = %.2f", max);

	return 0;
}
