/*
 * ex2.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

typedef struct {
	int feet;
	float inch;
} Distance;

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	Distance d1, d2,sum;
	printf("Enter info for 1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);

	printf("Enter info for 2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	scanf("%f", &d2.inch);

	sum.feet = d1.feet+d2.feet;
	sum.inch = d1.inch+d2.inch;
	if (sum.inch >=12 ) {
		sum.feet +=1;
		sum.inch -=12;
	}
	printf("sum of distances = %d'-%.1f\"",sum.feet,sum.inch);

	return 0;
}
