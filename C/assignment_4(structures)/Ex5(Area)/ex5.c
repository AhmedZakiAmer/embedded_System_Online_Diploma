/*
 * ex5.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"
#define pi 3.14

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int r;
	printf("Enter the radius: ");
	scanf("%d",&r);
	printf("Area = %.2f",pi*r*r);


	return 0;
}
