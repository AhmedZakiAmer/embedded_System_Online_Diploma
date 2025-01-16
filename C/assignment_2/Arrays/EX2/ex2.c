/*
 * ex2.c
 *
 *  Created on: Jan 17, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, n;
	printf("Enter the the numbers of data: ");
	scanf("%d", &n);
	float arr[n], sum= 0;
	for (i = 0; i < n; ++i) {
			printf("Enter number: ");
			scanf("%f", &arr[i]);
			sum += arr[i];
	}
	printf("Average = %.2f",sum/n);
	return 0;
}

