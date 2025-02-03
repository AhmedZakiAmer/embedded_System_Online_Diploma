/*
 * root.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"
#include "math.h"
void squareRoot(int num) {
	float res ;
	res= sqrt(1.0*num);
	printf("output:%.3f", res);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num;
	printf("input:");
	scanf("%d", &num);
	squareRoot(num);
	printf("\ninput:");
	scanf("%d", &num);
	squareRoot(num);
	return 0;
}
